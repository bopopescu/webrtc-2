// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/sync_file_system/task_logger.h"

#include "base/lazy_instance.h"
#include "base/stl_util.h"
#include "base/synchronization/lock.h"

namespace sync_file_system {

namespace {

const size_t kMaxLogSize = 500;

int g_next_log_id = 1;
base::LazyInstance<base::Lock>::Leaky g_log_id_lock = LAZY_INSTANCE_INITIALIZER;

int GenerateLogID() {
  base::AutoLock lock(g_log_id_lock.Get());
  return g_next_log_id++;
}

}  // namespace

typedef TaskLogger::TaskLog TaskLog;

TaskLogger::TaskLog::TaskLog() : log_id(GenerateLogID()) {}
TaskLogger::TaskLog::~TaskLog() {}

TaskLogger::TaskLogger() {}

TaskLogger::~TaskLogger() {
  ClearLog();
}

void TaskLogger::RecordLog(scoped_ptr<TaskLog> log) {
  if (!log)
    return;

  if (log_history_.size() >= kMaxLogSize) {
    delete log_history_.front();
    log_history_.pop_front();
  }

  log_history_.push_back(log.release());

  FOR_EACH_OBSERVER(Observer, observers_,
                    OnLogRecorded(*log_history_.back()));
}

void TaskLogger::ClearLog() {
  STLDeleteContainerPointers(log_history_.begin(), log_history_.end());
  log_history_.clear();
}

void TaskLogger::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void TaskLogger::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

const TaskLogger::LogList& TaskLogger::GetLog() const {
  return log_history_;
}

}  // namespace sync_file_system
