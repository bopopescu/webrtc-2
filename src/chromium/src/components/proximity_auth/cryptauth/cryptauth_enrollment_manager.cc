// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/proximity_auth/cryptauth/cryptauth_enrollment_manager.h"

#include "base/prefs/pref_registry_simple.h"
#include "base/prefs/pref_service.h"
#include "components/proximity_auth/cryptauth/pref_names.h"
#include "components/proximity_auth/cryptauth/sync_scheduler_impl.h"

namespace proximity_auth {

namespace {

// The number of days that an enrollment is valid. Note that we try to refresh
// the enrollment well before this time elapses.
const int kValidEnrollmentPeriodDays = 45;

// The normal period between successful enrollments in days.
const int kEnrollmentRefreshPeriodDays = 30;

// A more aggressive period between enrollments to recover when the last
// enrollment fails, in minutes. This is a base time that increases for each
// subsequent failure.
const int kEnrollmentBaseRecoveryPeriodMinutes = 10;

// The bound on the amount to jitter the period between enrollments.
const double kEnrollmentMaxJitterRatio = 0.2;

}  // namespace

CryptAuthEnrollmentManager::CryptAuthEnrollmentManager(
    scoped_ptr<base::Clock> clock,
    scoped_ptr<CryptAuthEnrollerFactory> enroller_factory,
    const cryptauth::GcmDeviceInfo& device_info)
    : clock_(clock.Pass()),
      enroller_factory_(enroller_factory.Pass()),
      device_info_(device_info),
      pref_service_(nullptr),
      weak_ptr_factory_(this) {
}

CryptAuthEnrollmentManager::~CryptAuthEnrollmentManager() {
}

// static
void CryptAuthEnrollmentManager::RegisterPrefs(PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(
      prefs::kCryptAuthEnrollmentIsRecoveringFromFailure, false);
  registry->RegisterDoublePref(
      prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds, 0.0);
  registry->RegisterIntegerPref(prefs::kCryptAuthEnrollmentReason,
                                cryptauth::INVOCATION_REASON_UNKNOWN);
}

void CryptAuthEnrollmentManager::Start(PrefService* pref_service) {
  pref_service_ = pref_service;

  bool is_recovering_from_failure =
      pref_service->GetBoolean(
          prefs::kCryptAuthEnrollmentIsRecoveringFromFailure) ||
      !IsEnrollmentValid();

  base::Time last_successful_enrollment = GetLastEnrollmentTime();
  base::TimeDelta elapsed_time_since_last_sync =
      clock_->Now() - last_successful_enrollment;

  scheduler_ = CreateSyncScheduler();
  scheduler_->Start(elapsed_time_since_last_sync,
                    is_recovering_from_failure
                        ? SyncScheduler::Strategy::AGGRESSIVE_RECOVERY
                        : SyncScheduler::Strategy::PERIODIC_REFRESH);
}

void CryptAuthEnrollmentManager::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void CryptAuthEnrollmentManager::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void CryptAuthEnrollmentManager::ForceEnrollmentNow(
    cryptauth::InvocationReason invocation_reason) {
  // We store the invocation reason in a preference so that it can persist
  // across browser restarts. If the sync fails, the next retry should still use
  // this original reason instead of INVOCATION_REASON_FAILURE_RECOVERY.
  pref_service_->SetInteger(prefs::kCryptAuthEnrollmentReason,
                            invocation_reason);
  scheduler_->ForceSync();
}

bool CryptAuthEnrollmentManager::IsEnrollmentValid() const {
  base::Time last_enrollment_time = GetLastEnrollmentTime();
  return !last_enrollment_time.is_null() &&
         (clock_->Now() - last_enrollment_time) <
             base::TimeDelta::FromDays(kValidEnrollmentPeriodDays);
}

base::Time CryptAuthEnrollmentManager::GetLastEnrollmentTime() const {
  return base::Time::FromDoubleT(pref_service_->GetDouble(
      prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds));
}

base::TimeDelta CryptAuthEnrollmentManager::GetTimeToNextAttempt() const {
  return scheduler_->GetTimeToNextSync();
}

bool CryptAuthEnrollmentManager::IsEnrollmentInProgress() const {
  return scheduler_->GetSyncState() ==
         SyncScheduler::SyncState::SYNC_IN_PROGRESS;
}

bool CryptAuthEnrollmentManager::IsRecoveringFromFailure() const {
  return scheduler_->GetStrategy() ==
         SyncScheduler::Strategy::AGGRESSIVE_RECOVERY;
}

void CryptAuthEnrollmentManager::OnEnrollmentFinished(bool success) {
  if (success) {
    pref_service_->SetDouble(
        prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds,
        clock_->Now().ToDoubleT());
    pref_service_->SetInteger(prefs::kCryptAuthEnrollmentReason,
                              cryptauth::INVOCATION_REASON_UNKNOWN);
  }

  pref_service_->SetBoolean(prefs::kCryptAuthEnrollmentIsRecoveringFromFailure,
                            !success);

  sync_request_->OnDidComplete(success);
  cryptauth_enroller_.reset();
  sync_request_.reset();
  FOR_EACH_OBSERVER(Observer, observers_, OnEnrollmentFinished(success));
}

scoped_ptr<SyncScheduler> CryptAuthEnrollmentManager::CreateSyncScheduler() {
  return make_scoped_ptr(new SyncSchedulerImpl(
      this, base::TimeDelta::FromDays(kEnrollmentRefreshPeriodDays),
      base::TimeDelta::FromMinutes(kEnrollmentBaseRecoveryPeriodMinutes),
      kEnrollmentMaxJitterRatio, "CryptAuth Enrollment"));
}

void CryptAuthEnrollmentManager::OnSyncRequested(
    scoped_ptr<SyncScheduler::SyncRequest> sync_request) {
  FOR_EACH_OBSERVER(Observer, observers_, OnEnrollmentStarted());

  sync_request_ = sync_request.Pass();
  cryptauth_enroller_ = enroller_factory_->CreateInstance();

  cryptauth::InvocationReason invocation_reason =
      cryptauth::INVOCATION_REASON_UNKNOWN;

  int reason_stored_in_prefs =
      pref_service_->GetInteger(prefs::kCryptAuthEnrollmentReason);

  if (cryptauth::InvocationReason_IsValid(reason_stored_in_prefs) &&
      reason_stored_in_prefs != cryptauth::INVOCATION_REASON_UNKNOWN) {
    invocation_reason =
        static_cast<cryptauth::InvocationReason>(reason_stored_in_prefs);
  } else if (GetLastEnrollmentTime().is_null()) {
    invocation_reason = cryptauth::INVOCATION_REASON_INITIALIZATION;
  } else if (!IsEnrollmentValid()) {
    invocation_reason = cryptauth::INVOCATION_REASON_EXPIRATION;
  } else if (scheduler_->GetStrategy() ==
             SyncScheduler::Strategy::PERIODIC_REFRESH) {
    invocation_reason = cryptauth::INVOCATION_REASON_PERIODIC;
  } else if (scheduler_->GetStrategy() ==
             SyncScheduler::Strategy::AGGRESSIVE_RECOVERY) {
    invocation_reason = cryptauth::INVOCATION_REASON_FAILURE_RECOVERY;
  }

  cryptauth_enroller_->Enroll(
      device_info_, invocation_reason,
      base::Bind(&CryptAuthEnrollmentManager::OnEnrollmentFinished,
                 weak_ptr_factory_.GetWeakPtr()));
}

}  // namespace proximity_auth
