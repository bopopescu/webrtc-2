// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ash/test/overflow_bubble_view_test_api.h"

#include "ash/shelf/overflow_bubble_view.h"

namespace ash {
namespace test {

OverflowBubbleViewTestAPI::OverflowBubbleViewTestAPI(
    OverflowBubbleView* bubble_view)
    : bubble_view_(bubble_view) {}

OverflowBubbleViewTestAPI::~OverflowBubbleViewTestAPI() {
}

gfx::Size OverflowBubbleViewTestAPI::GetContentsSize() {
  return bubble_view_->GetContentsSize();
}

void OverflowBubbleViewTestAPI::ScrollByXOffset(int x_offset) {
  bubble_view_->ScrollByXOffset(x_offset);
  bubble_view_->Layout();
}

}  // namespace test
}  // namespace ash
