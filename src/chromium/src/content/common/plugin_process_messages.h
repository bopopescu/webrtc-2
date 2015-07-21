// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Multiply-included message file, hence no include guard.

#include "build/build_config.h"
#include "content/common/content_export.h"
#include "content/common/content_param_traits.h"
#include "content/public/common/common_param_traits.h"
#include "ipc/ipc_channel_handle.h"
#include "ipc/ipc_message_macros.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/ipc/gfx_param_traits.h"
#include "ui/gfx/native_widget_types.h"

#undef IPC_MESSAGE_EXPORT
#define IPC_MESSAGE_EXPORT CONTENT_EXPORT

#define IPC_MESSAGE_START PluginProcessMsgStart

//-----------------------------------------------------------------------------
// PluginProcess messages
// These are messages sent from the browser to the plugin process.
// Tells the plugin process to create a new channel for communication with a
// given renderer.  The channel name is returned in a
// PluginProcessHostMsg_ChannelCreated message.  The renderer ID is passed so
// that the plugin process reuses an existing channel to that process if it
// exists. This ID is a unique opaque identifier generated by the browser
// process.
IPC_MESSAGE_CONTROL2(PluginProcessMsg_CreateChannel,
                     int /* renderer_id */,
                     bool /* off_the_record */)

// Tells the plugin process to notify every connected renderer of the pending
// shutdown, so we don't mistake it for a crash.
IPC_MESSAGE_CONTROL0(PluginProcessMsg_NotifyRenderersOfPendingShutdown)

IPC_MESSAGE_CONTROL3(PluginProcessMsg_ClearSiteData,
                     std::string /* site */,
                     uint64 /* flags */,
                     uint64 /* max_age */)


//-----------------------------------------------------------------------------
// PluginProcessHost messages
// These are messages sent from the plugin process to the browser process.
// Response to a PluginProcessMsg_CreateChannel message.
IPC_MESSAGE_CONTROL1(PluginProcessHostMsg_ChannelCreated,
                     IPC::ChannelHandle /* channel_handle */)

IPC_MESSAGE_CONTROL1(PluginProcessHostMsg_ChannelDestroyed,
                     int /* renderer_id */)

IPC_MESSAGE_CONTROL1(PluginProcessHostMsg_ClearSiteDataResult,
                     bool /* success */)

#if defined(OS_WIN)
// Destroys the given window's parent on the UI thread.
IPC_MESSAGE_CONTROL2(PluginProcessHostMsg_PluginWindowDestroyed,
                     HWND /* window */,
                     HWND /* parent */)
#endif

#if defined(OS_MACOSX)
// On Mac OS X, we need the browser to keep track of plugin windows so
// that it can add and remove them from stacking groups, hide and show the
// menu bar, etc.  We pass the window rect for convenience so that the
// browser can easily tell if the window is fullscreen.

// Notifies the browser that the plugin has shown a window.
IPC_MESSAGE_CONTROL3(PluginProcessHostMsg_PluginShowWindow,
                     uint32 /* window ID */,
                     gfx::Rect /* window rect */,
                     bool /* modal */)

// Notifies the browser that the plugin has hidden a window.
IPC_MESSAGE_CONTROL2(PluginProcessHostMsg_PluginHideWindow,
                     uint32 /* window ID */,
                     gfx::Rect /* window rect */)

// Notifies the browser that a plugin instance has requested a cursor
// visibility change.
IPC_MESSAGE_CONTROL1(PluginProcessHostMsg_PluginSetCursorVisibility,
                     bool /* cursor visibility */)
#endif
