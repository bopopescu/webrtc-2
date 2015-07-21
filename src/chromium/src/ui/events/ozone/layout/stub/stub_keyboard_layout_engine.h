// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_OZONE_LAYOUT_STUB_STUB_KEYBOARD_LAYOUT_ENGINE_H_
#define UI_EVENTS_OZONE_LAYOUT_STUB_STUB_KEYBOARD_LAYOUT_ENGINE_H_

#include "ui/events/ozone/layout/events_ozone_layout_export.h"
#include "ui/events/ozone/layout/keyboard_layout_engine.h"

namespace ui {

class EVENTS_OZONE_LAYOUT_EXPORT StubKeyboardLayoutEngine
    : public KeyboardLayoutEngine {
 public:
  StubKeyboardLayoutEngine();
  ~StubKeyboardLayoutEngine() override;

  // KeyboardLayoutEngineOzone:
  bool CanSetCurrentLayout() const override;
  bool SetCurrentLayoutByName(const std::string& layout_name) override;
  bool UsesISOLevel5Shift() const override;
  bool UsesAltGr() const override;
  bool Lookup(DomCode dom_code,
              int flags,
              DomKey* dom_key,
              base::char16* character,
              KeyboardCode* key_code,
              uint32* platform_keycode) const override;
};

}  // namespace ui

#endif  // UI_EVENTS_OZONE_LAYOUT_STUB_STUB_KEYBOARD_LAYOUT_ENGINE_H_
