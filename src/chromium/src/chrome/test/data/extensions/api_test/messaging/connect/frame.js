// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

chrome.runtime.onConnect.addListener(function(port) {
  port.onMessage.addListener(function(msg) {
    if (msg.testSendMessageToFrame) {
      // page.js created this frame with an unique digit starting at 0.
      // This number is used in test.js to identify messages from this frame.
      var test_id = location.search.slice(-1);
      port.postMessage('from_' + test_id);
    }
  });
});

// continuation of testSendMessageFromFrame()
chrome.runtime.sendMessage({frameUrl: location.href});
