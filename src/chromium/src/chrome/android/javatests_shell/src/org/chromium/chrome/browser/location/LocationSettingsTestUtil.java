// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.location;

import org.chromium.base.ThreadUtils;
import org.chromium.chrome.browser.preferences.LocationSettings;

/**
 * Methods for testing location-related features.
 */
public class LocationSettingsTestUtil {

    /**
     * Mocks the system location setting as either enabled or disabled. Can be called on any thread.
     */
    public static void setSystemLocationSettingEnabled(final boolean enabled) {
        ThreadUtils.runOnUiThreadBlocking(new Runnable() {
            @Override
            public void run() {
                LocationSettings.setInstanceForTesting(new LocationSettings(null) {
                    @Override
                    public boolean isSystemLocationSettingEnabled() {
                        return enabled;
                    }
                });
            }
        });
    }
}