// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/renderer/media/mock_data_channel_impl.h"

namespace content {

MockDataChannel::MockDataChannel(const std::string& label,
                const webrtc::DataChannelInit* config)
    : label_(label),
      reliable_(config->reliable),
      state_(webrtc::DataChannelInterface::kConnecting),
      config_(*config),
      observer_(nullptr) {
}

MockDataChannel::~MockDataChannel() {
}

void MockDataChannel::RegisterObserver(webrtc::DataChannelObserver* observer) {
  observer_ = observer;
}

void MockDataChannel::UnregisterObserver() {
  observer_ = nullptr;
}

std::string MockDataChannel::label() const { return label_; }

bool MockDataChannel::reliable() const { return reliable_; }

bool MockDataChannel::ordered() const { return config_.ordered; }

unsigned short MockDataChannel::maxRetransmitTime() const {
  return config_.maxRetransmitTime;
}

unsigned short MockDataChannel::maxRetransmits() const {
  return config_.maxRetransmits;
}

std::string MockDataChannel::protocol() const { return config_.protocol; }

bool MockDataChannel::negotiated() const { return config_.negotiated; }

int MockDataChannel::id() const {
  NOTIMPLEMENTED();
  return 0;
}

MockDataChannel::DataState MockDataChannel::state() const { return state_; }

// For testing.
void MockDataChannel::changeState(DataState state) {
  state_ = state;
  if (observer_)
    observer_->OnStateChange();
}

uint64 MockDataChannel::buffered_amount() const {
  NOTIMPLEMENTED();
  return 0;
}

void MockDataChannel::Close() {
  changeState(webrtc::DataChannelInterface::kClosing);
}

bool MockDataChannel::Send(const webrtc::DataBuffer& buffer) {
  return state_ == webrtc::DataChannelInterface::kOpen;
}

}  // namespace content
