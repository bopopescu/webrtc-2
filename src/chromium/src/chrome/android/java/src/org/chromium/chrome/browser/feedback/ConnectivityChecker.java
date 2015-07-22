// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.feedback;

import android.os.AsyncTask;

import org.chromium.base.CalledByNative;
import org.chromium.base.JNINamespace;
import org.chromium.base.Log;
import org.chromium.base.ThreadUtils;
import org.chromium.base.VisibleForTesting;
import org.chromium.chrome.browser.profiles.Profile;

import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;

/**
 * A utility class for checking if the device is currently connected to the Internet.
 */
@JNINamespace("chrome::android")
public final class ConnectivityChecker {
    private static final String TAG = "Feedback";

    private static final String DEFAULT_HTTP_NO_CONTENT_URL =
            "http://clients4.google.com/generate_204";
    private static final String DEFAULT_HTTPS_NO_CONTENT_URL =
            "https://clients4.google.com/generate_204";

    private static String sHttpNoContentUrl = DEFAULT_HTTP_NO_CONTENT_URL;
    private static String sHttpsNoContentUrl = DEFAULT_HTTPS_NO_CONTENT_URL;

    /**
     * A callback for whether the device is currently connected to the Internet.
     */
    public interface ConnectivityCheckerCallback {
        /**
         * Called when the result of the connectivity check is ready.
         */
        void onResult(boolean connected);
    }

    @VisibleForTesting
    static void overrideUrlsForTest(String httpUrl, String httpsUrl) {
        ThreadUtils.assertOnUiThread();
        sHttpNoContentUrl = httpUrl;
        sHttpsNoContentUrl = httpsUrl;
    }

    /**
     * Starts an asynchronous request for checking whether the device is currently connected to the
     * Internet using the Android system network stack. The result passed to the callback denotes
     * whether the attempt to connect to the server was successful.
     *
     * If the profile or URL is invalid, the callback will be called with false.
     * The server reply for the URL must respond with HTTP 204 without any redirects for the
     * connectivity check to be successful.
     *
     * This method takes ownership of the callback object until the callback has happened.
     * This method must be called on the main thread.
     * @param timeoutMs number of milliseconds to wait before giving up waiting for a connection.
     * @param callback the callback which will get the result.
     */
    public static void checkConnectivitySystemNetworkStack(
            boolean useHttps, int timeoutMs, final ConnectivityCheckerCallback callback) {
        try {
            URL url = useHttps ? new URL(sHttpsNoContentUrl) : new URL(sHttpNoContentUrl);
            checkConnectivitySystemNetworkStack(url, timeoutMs, callback);
        } catch (MalformedURLException e) {
            Log.w(TAG, "Failed to predefined URL: " + e);
            ThreadUtils.postOnUiThread(new Runnable() {
                @Override
                public void run() {
                    callback.onResult(false);
                }
            });
        }
    }

    static void checkConnectivitySystemNetworkStack(
            final URL url, final int timeoutMs, final ConnectivityCheckerCallback callback) {
        new AsyncTask<String, Void, Boolean>() {
            @Override
            protected Boolean doInBackground(String... strings) {
                try {
                    HttpURLConnection conn = (HttpURLConnection) url.openConnection();
                    conn.setInstanceFollowRedirects(false);
                    conn.setRequestMethod("GET");
                    conn.setDoInput(false);
                    conn.setDoOutput(false);
                    conn.setConnectTimeout(timeoutMs);
                    conn.setReadTimeout(timeoutMs);

                    conn.connect();
                    int responseCode = conn.getResponseCode();
                    return responseCode == HttpURLConnection.HTTP_NO_CONTENT;
                } catch (IOException e) {
                    return false;
                }
            }

            @Override
            protected void onPostExecute(Boolean connected) {
                callback.onResult(connected);
            }
        }.executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR);
    }

    /**
     * Starts an asynchronous request for checking whether the device is currently connected to the
     * Internet using the Chrome network stack. The result passed to the callback denotes whether
     *the
     * attempt to connect to the server was successful.
     *
     * If the profile or URL is invalid, the callback will be called with false.
     * The server reply for the URL must respond with HTTP 204 without any redirects for the
     * connectivity check to be successful.
     *
     * This method takes ownership of the callback object until the callback has happened.
     * This method must be called on the main thread.
     * @param profile the context to do the check in.
     * @param timeoutMs number of milliseconds to wait before giving up waiting for a connection.
     * @param callback the callback which will get the result.
     */
    public static void checkConnectivityChromeNetworkStack(Profile profile, boolean useHttps,
            int timeoutMs, ConnectivityCheckerCallback callback) {
        String url = useHttps ? sHttpsNoContentUrl : sHttpNoContentUrl;
        checkConnectivityChromeNetworkStack(profile, url, timeoutMs, callback);
    }

    @VisibleForTesting
    static void checkConnectivityChromeNetworkStack(
            Profile profile, String url, long timeoutMs, ConnectivityCheckerCallback callback) {
        ThreadUtils.assertOnUiThread();
        nativeCheckConnectivity(profile, url, timeoutMs, callback);
    }

    @CalledByNative
    private static void executeCallback(Object callback, boolean connected) {
        ((ConnectivityCheckerCallback) callback).onResult(connected);
    }

    private ConnectivityChecker() {}

    private static native void nativeCheckConnectivity(
            Profile profile, String url, long timeoutMs, ConnectivityCheckerCallback callback);
}