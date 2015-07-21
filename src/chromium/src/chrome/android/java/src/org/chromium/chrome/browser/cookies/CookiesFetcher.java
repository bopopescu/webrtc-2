// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.cookies;

import android.content.Context;
import android.os.AsyncTask;
import android.util.Log;

import org.chromium.base.CalledByNative;
import org.chromium.base.ImportantFileWriterAndroid;
import org.chromium.base.ThreadUtils;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.content.browser.crypto.CipherFactory;
import org.chromium.content.common.CleanupReference;

import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import javax.crypto.Cipher;
import javax.crypto.CipherInputStream;
import javax.crypto.CipherOutputStream;

/**
 * Responsible for fetching, (de)serializing, and restoring cookies between the CookieJar and an
 * encrypted file storage.
 */
public class CookiesFetcher {
    /** The default file name for the encrypted cookies storage. */
    private static final String DEFAULT_COOKIE_FILE_NAME = "COOKIES.DAT";

    /** Used for logging. */
    private static final String TAG = "CookiesFetcher";

    /**
     * Used to confirm that the current cipher key matches the previously used cipher key when
     * restoring data.  If this value cannot be read from the file, the file is likely garbage.
     * TODO(acleung): May be use real cryptographic integrity checks on the whole file, instead.
     */
    private static final String MAGIC_STRING = "c0Ok135";

    /** Native-side pointer. */
    private final long mNativeCookiesFetcher;

    private final CleanupReference mCleanupReference;

    private final Context mContext;

    /**
     * Creates a new fetcher that can use to fetch cookies from cookie jar
     * or from a file.
     *
     * The lifetime of this object is handled internally. Callers only call
     * the public static methods which construct a CookiesFetcher object.
     * It remains alive only during the static call or when it is still
     * waiting for a callback to be invoked. In the latter case, the native
     * counter part will hold a strong reference to this Java class so the GC
     * would not collect it until the callback has been invoked.
     */
    private CookiesFetcher(Context context) {
        mNativeCookiesFetcher = nativeInit();
        mContext = context.getApplicationContext();
        mCleanupReference = new CleanupReference(this, new DestroyRunnable(mNativeCookiesFetcher));
    }

    /**
     * Fetches the cookie file's path on demand to prevent IO on the main thread.
     *
     * @return Path to the cookie file.
     */
    private String fetchFileName() {
        assert !ThreadUtils.runningOnUiThread();
        return mContext.getFileStreamPath(DEFAULT_COOKIE_FILE_NAME).getAbsolutePath();
    }

    /**
     * Asynchronously fetches cookies from the incognito profile and saves them to a file.
     *
     * @param context Context for accessing the file system.
     */
    public static void persistCookies(Context context) {
        try {
            new CookiesFetcher(context).persistCookiesInternal();
        } catch (RuntimeException e) {
            e.printStackTrace();
        }
    }

    private void persistCookiesInternal() {
        nativePersistCookies(mNativeCookiesFetcher);
    }

    /**
     * If an incognito profile exists, synchronously fetch cookies from the file specified and
     * populate the incognito profile with it.  Otherwise deletes the file and does not restore the
     * cookies.
     *
     * @param context Context for accessing the file system.
     */
    public static void restoreCookies(Context context) {
        try {
            CookiesFetcher fetcher = new CookiesFetcher(context);
            if (deleteCookiesIfNecessary(context)) return;
            fetcher.restoreCookiesInternal();
        } catch (RuntimeException e) {
            e.printStackTrace();
        }
    }

    private void restoreCookiesInternal() {
        new AsyncTask<Void, Void, List<CanonicalCookie>>() {
            @Override
            protected List<CanonicalCookie> doInBackground(Void... voids) {
                // Read cookies from disk on a background thread to avoid strict mode violations.
                ArrayList<CanonicalCookie> cookies = new ArrayList<CanonicalCookie>();
                DataInputStream in = null;
                try {
                    Cipher cipher = CipherFactory.getInstance().getCipher(Cipher.DECRYPT_MODE);
                    if (cipher == null) {
                        // Something is wrong. Can't encrypt, don't restore cookies.
                        return cookies;
                    }
                    File fileIn = new File(fetchFileName());
                    if (!fileIn.exists()) return cookies; // Nothing to read

                    FileInputStream streamIn = new FileInputStream(fileIn);
                    in = new DataInputStream(new CipherInputStream(streamIn, cipher));
                    String check = in.readUTF();
                    if (!MAGIC_STRING.equals(check)) {
                        // Stale cookie file. Chrome might have crashed before it
                        // can delete the old file.
                        return cookies;
                    }
                    try {
                        while (true) {
                            CanonicalCookie cookie = CanonicalCookie.createFromStream(in);
                            cookies.add(cookie);
                        }
                    } catch (EOFException ignored) {
                      // We are done.
                    }

                    // The Cookie File should not be restored again. It'll be overwritten
                    // on the next onPause.
                    scheduleDeleteCookiesFile();

                } catch (IOException e) {
                    Log.w(TAG, "IOException during Cookie Restore");
                } catch (Throwable t) {
                    Log.w(TAG, "Error restoring cookies.", t);
                } finally {
                    try {
                        if (in != null) in.close();
                    } catch (IOException e) {
                        Log.w(TAG, "IOException during Cooke Restore");
                    } catch (Throwable t) {
                        Log.w(TAG, "Error restoring cookies.", t);
                    }
                }
                return cookies;
            }

            @Override
            protected void onPostExecute(List<CanonicalCookie> cookies) {
                // We can only access cookies and profiles on the UI thread.
                for (CanonicalCookie cookie : cookies) {
                    nativeRestoreCookies(mNativeCookiesFetcher, cookie.getUrl(), cookie.getName(),
                            cookie.getValue(), cookie.getDomain(), cookie.getPath(),
                            cookie.getCreationDate(), cookie.getExpirationDate(),
                            cookie.getLastAccessDate(), cookie.isSecure(), cookie.isHttpOnly(),
                            cookie.isFirstPartyOnly(), cookie.getPriority());
                }
            }
        }.executeOnExecutor(AsyncTask.SERIAL_EXECUTOR);
    }

    /**
     * Ensure the incognito cookies are deleted when the incognito profile is gone.
     *
     * @param context Context for accessing the file system.
     * @return Whether or not the cookies were deleted.
     */
    public static boolean deleteCookiesIfNecessary(Context context) {
        try {
            CookiesFetcher fetcher = new CookiesFetcher(context);
            if (Profile.getLastUsedProfile().hasOffTheRecordProfile()) return false;
            fetcher.scheduleDeleteCookiesFile();
        } catch (RuntimeException e) {
            e.printStackTrace();
            return false;
        }
        return true;
    }

    @CalledByNative
    private CanonicalCookie createCookie(String url, String name, String value, String domain,
            String path, long creation, long expiration, long lastAccess, boolean secure,
            boolean httpOnly, boolean firstPartyOnly, int priority) {
        return new CanonicalCookie(url, name, value, domain, path, creation, expiration, lastAccess,
                secure, httpOnly, firstPartyOnly, priority);
    }

    @CalledByNative
    private void onCookieFetchFinished(final CanonicalCookie[] cookies) {
        // Cookies fetching requires operations with the profile and must be
        // done in the main thread. Once that is done, do the save to disk
        // part in {@link AsyncTask} to avoid strict mode violations.
        new AsyncTask<Void, Void, Void>() {
            @Override
            protected Void doInBackground(Void... voids) {
                saveFetchedCookiesToDisk(cookies);
                return null;
            }
        }.executeOnExecutor(AsyncTask.SERIAL_EXECUTOR);
    }

    private void saveFetchedCookiesToDisk(CanonicalCookie[] cookies) {
        DataOutputStream out = null;
        try {
            Cipher cipher = CipherFactory.getInstance().getCipher(Cipher.ENCRYPT_MODE);
            if (cipher == null) {
                // Something is wrong. Can't encrypt, don't save cookies.
                return;
            }

            ByteArrayOutputStream byteOut = new ByteArrayOutputStream();
            CipherOutputStream cipherOut =
                    new CipherOutputStream(byteOut, cipher);
            out = new DataOutputStream(cipherOut);

            out.writeUTF(MAGIC_STRING);
            for (CanonicalCookie cookie : cookies) {
                cookie.saveToStream(out);
            }
            out.close();
            ImportantFileWriterAndroid.writeFileAtomically(
                    fetchFileName(), byteOut.toByteArray());
            out = null;
        } catch (IOException e) {
            Log.w(TAG, "IOException during Cookie Fetch");
        } catch (Throwable t) {
            Log.w(TAG, "Error storing cookies.", t);
        } finally {
            try {
                if (out != null) out.close();
            } catch (IOException e) {
                Log.w(TAG, "IOException during Cookie Fetch");
            }
        }
    }

    /**
     * Delete the cookies file. Called when we detect that all incognito tabs have been closed.
     */
    private void scheduleDeleteCookiesFile() {
        new AsyncTask<Void, Void, Void>() {
            @Override
            protected Void doInBackground(Void... voids) {
                File cookiesFile = new File(fetchFileName());
                if (cookiesFile.exists()) {
                    if (!cookiesFile.delete()) {
                        Log.e(TAG, "Failed to delete " + cookiesFile.getName());
                    }
                }
                return null;
            }
        }.executeOnExecutor(AsyncTask.SERIAL_EXECUTOR);
    }

    private static final class DestroyRunnable implements Runnable {
        private final long mNativeCookiesFetcher;

        private DestroyRunnable(long nativeCookiesFetcher) {
            mNativeCookiesFetcher = nativeCookiesFetcher;
        }

        @Override
        public void run() {
            if (mNativeCookiesFetcher != 0) nativeDestroy(mNativeCookiesFetcher);
        }
    }

    @CalledByNative
    private CanonicalCookie[] createCookiesArray(int size) {
        return new CanonicalCookie[size];
    }

    private native long nativeInit();
    private static native void nativeDestroy(long nativeCookiesFetcher);
    private native void nativePersistCookies(long nativeCookiesFetcher);
    private native void nativeRestoreCookies(long nativeCookiesFetcher, String url, String name,
            String value, String domain, String path, long creation, long expiration,
            long lastAccess, boolean secure, boolean httpOnly, boolean firstPartyOnly,
            int priority);
}
