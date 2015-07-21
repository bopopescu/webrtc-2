// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_TAB_ICON_VIEW_H_
#define CHROME_BROWSER_UI_VIEWS_TAB_ICON_VIEW_H_

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#include "base/time/time.h"
#include "ui/views/controls/button/menu_button.h"
#include "ui/views/view.h"

namespace chrome {
class TabIconViewModel;
}

namespace gfx {
class ImageSkia;
}

// A view to display a tab favicon or a throbber.
class TabIconView : public views::MenuButton {
 public:
  static void InitializeIfNeeded();

  TabIconView(chrome::TabIconViewModel* model,
              views::MenuButtonListener* menu_button_listener);
  ~TabIconView() override;

  // Invoke whenever the tab state changes or the throbber should update.
  void Update();

  // Set the throbber to the light style (for use on dark backgrounds).
  void set_is_light(bool is_light) { is_light_ = is_light; }

 private:
  // views::MenuButton:
  gfx::Size GetPreferredSize() const override;
  const char* GetClassName() const override;
  void OnPaint(gfx::Canvas* canvas) override;

  void PaintThrobber(gfx::Canvas* canvas);
  void PaintFavicon(gfx::Canvas* canvas, const gfx::ImageSkia& image);

  // Our model.
  chrome::TabIconViewModel* model_;

  // Whether we should display our light or dark style.
  bool is_light_;

  // Time we painted the first frame of the current throbber animation, or
  // 0 if not painting the throbber.
  base::TimeTicks throbber_start_time_;

  DISALLOW_COPY_AND_ASSIGN(TabIconView);
};

#endif  // CHROME_BROWSER_UI_VIEWS_TAB_ICON_VIEW_H_
