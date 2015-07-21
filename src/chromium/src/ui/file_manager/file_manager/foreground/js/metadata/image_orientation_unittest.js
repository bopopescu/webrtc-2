// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

function testGetSizeAfterCancelling() {
  // Crockwise 90 degrees image orientation.
  var orientation = new ImageOrientation(0, 1, 1, 0);

  // After cancelling orientation, the width and the height are swapped.
  var size = orientation.getSizeAfterCancelling(100, 200);
  assertEquals(200, size.width);
  assertEquals(100, size.height);
}

function testCancelImageOrientation() {
  // Crockwise 90 degrees image orientation.
  var orientation = new ImageOrientation(0, 1, 1, 0);

  var canvas = document.createElement('canvas');
  canvas.width = 2;
  canvas.height = 1;

  var context = canvas.getContext('2d');
  var imageData = context.createImageData(2, 1);
  imageData.data[0] = 255;  // R
  imageData.data[1] = 0;  // G
  imageData.data[2] = 0;  // B
  imageData.data[3] = 100;  // A
  imageData.data[4] = 0;  // R
  imageData.data[5] = 0;  // G
  imageData.data[6] = 0;  // B
  imageData.data[7] = 100;  // A
  context.putImageData(imageData, 0, 0);

  var destinationCanvas = document.createElement('canvas');
  destinationCanvas.width = 1;
  destinationCanvas.height = 2;
  var destinationContext = destinationCanvas.getContext('2d');
  orientation.cancelImageOrientation(destinationContext, 2, 1);
  destinationContext.drawImage(canvas, 0, 0);
  var destinationImageData = destinationContext.getImageData(0, 0, 1, 2);
  assertArrayEquals([255, 0, 0, 100, 0, 0, 0, 100], destinationImageData.data);
}
