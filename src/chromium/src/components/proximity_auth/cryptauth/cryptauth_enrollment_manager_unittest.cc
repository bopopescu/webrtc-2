// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/proximity_auth/cryptauth/cryptauth_enrollment_manager.h"

#include "base/memory/weak_ptr.h"
#include "base/prefs/testing_pref_service.h"
#include "base/test/simple_test_clock.h"
#include "components/proximity_auth/cryptauth/mock_sync_scheduler.h"
#include "components/proximity_auth/cryptauth/pref_names.h"
#include "testing/gmock/include/gmock/gmock.h"
#include "testing/gtest/include/gtest/gtest.h"

using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::SaveArg;

namespace proximity_auth {

namespace {

// The initial "Now" time for testing.
const double kInitialTimeNowSeconds = 20000000;

// A later "Now" time for testing.
const double kLaterTimeNow = kInitialTimeNowSeconds + 30;

// The timestamp of a last successful enrollment that is still valid.
const double kLastEnrollmentTimeSeconds =
    kInitialTimeNowSeconds - (60 * 60 * 24 * 15);

// The timestamp of a last successful enrollment that is expired.
const double kLastExpiredEnrollmentTimeSeconds =
    kInitialTimeNowSeconds - (60 * 60 * 24 * 100);

// Mocks out the actual enrollment flow.
class MockCryptAuthEnroller : public CryptAuthEnroller {
 public:
  MockCryptAuthEnroller() {}
  ~MockCryptAuthEnroller() override {}

  MOCK_METHOD3(Enroll,
               void(const cryptauth::GcmDeviceInfo& device_info,
                    cryptauth::InvocationReason invocation_reason,
                    const EnrollmentFinishedCallback& callback));

 private:
  DISALLOW_COPY_AND_ASSIGN(MockCryptAuthEnroller);
};

// Creates MockCryptAuthEnroller instances, and allows expecations to be set
// before they are returned.
class MockCryptAuthEnrollerFactory : public CryptAuthEnrollerFactory {
 public:
  MockCryptAuthEnrollerFactory()
      : next_cryptauth_enroller_(new NiceMock<MockCryptAuthEnroller>()) {}
  ~MockCryptAuthEnrollerFactory() override {}

  // CryptAuthEnrollerFactory:
  scoped_ptr<CryptAuthEnroller> CreateInstance() override {
    auto passed_cryptauth_enroller = next_cryptauth_enroller_.Pass();
    next_cryptauth_enroller_.reset(new NiceMock<MockCryptAuthEnroller>());
    return passed_cryptauth_enroller.Pass();
  }

  MockCryptAuthEnroller* next_cryptauth_enroller() {
    return next_cryptauth_enroller_.get();
  }

 private:
  // Stores the next CryptAuthEnroller to be created.
  // Ownership is passed to the caller of |CreateInstance()|.
  scoped_ptr<MockCryptAuthEnroller> next_cryptauth_enroller_;

  DISALLOW_COPY_AND_ASSIGN(MockCryptAuthEnrollerFactory);
};

// Harness for testing CryptAuthEnrollmentManager.
class TestCryptAuthEnrollmentManager : public CryptAuthEnrollmentManager {
 public:
  TestCryptAuthEnrollmentManager(
      scoped_ptr<base::Clock> clock,
      scoped_ptr<CryptAuthEnrollerFactory> enroller_factory,
      const cryptauth::GcmDeviceInfo& device_info)
      : CryptAuthEnrollmentManager(clock.Pass(),
                                   enroller_factory.Pass(),
                                   device_info),
        scoped_sync_scheduler_(new NiceMock<MockSyncScheduler>()),
        weak_sync_scheduler_factory_(scoped_sync_scheduler_.get()) {}

  ~TestCryptAuthEnrollmentManager() override {}

  scoped_ptr<SyncScheduler> CreateSyncScheduler() override {
    EXPECT_TRUE(scoped_sync_scheduler_);
    return scoped_sync_scheduler_.Pass();
  }

  base::WeakPtr<MockSyncScheduler> GetSyncScheduler() {
    return weak_sync_scheduler_factory_.GetWeakPtr();
  }

 private:
  // Ownership is passed to |CryptAuthEnrollmentManager| super class when
  // |CreateSyncScheduler()| is called.
  scoped_ptr<MockSyncScheduler> scoped_sync_scheduler_;

  // Stores the pointer of |scoped_sync_scheduler_| after ownership is passed to
  // the super class.
  // This should be safe because the life-time this SyncScheduler will always be
  // within the life of the TestCryptAuthEnrollmentManager object.
  base::WeakPtrFactory<MockSyncScheduler> weak_sync_scheduler_factory_;

  DISALLOW_COPY_AND_ASSIGN(TestCryptAuthEnrollmentManager);
};

}  // namespace

class ProximityAuthCryptAuthEnrollmentManagerTest
    : public testing::Test,
      public CryptAuthEnrollmentManager::Observer {
 protected:
  ProximityAuthCryptAuthEnrollmentManagerTest()
      : clock_(new base::SimpleTestClock()),
        enroller_factory_(new MockCryptAuthEnrollerFactory()),
        enrollment_manager_(make_scoped_ptr(clock_),
                            make_scoped_ptr(enroller_factory_),
                            device_info_) {}

  // testing::Test:
  void SetUp() override {
    clock_->SetNow(base::Time::FromDoubleT(kInitialTimeNowSeconds));
    enrollment_manager_.AddObserver(this);

    CryptAuthEnrollmentManager::RegisterPrefs(pref_service_.registry());
    pref_service_.SetUserPref(
        prefs::kCryptAuthEnrollmentIsRecoveringFromFailure,
        new base::FundamentalValue(false));
    pref_service_.SetUserPref(
        prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds,
        new base::FundamentalValue(kLastEnrollmentTimeSeconds));
    pref_service_.SetUserPref(
        prefs::kCryptAuthEnrollmentReason,
        new base::FundamentalValue(cryptauth::INVOCATION_REASON_UNKNOWN));

    ON_CALL(*sync_scheduler(), GetStrategy())
        .WillByDefault(Return(SyncScheduler::Strategy::PERIODIC_REFRESH));
  }

  void TearDown() override { enrollment_manager_.RemoveObserver(this); }

  // CryptAuthEnrollmentManager::Observer:
  void OnEnrollmentStarted() override { OnEnrollmentStartedProxy(); }

  void OnEnrollmentFinished(bool success) override {
    // Simulate the scheduler changing strategies based on success or failure.
    SyncScheduler::Strategy new_strategy =
        SyncScheduler::Strategy::AGGRESSIVE_RECOVERY;
    ON_CALL(*sync_scheduler(), GetStrategy())
        .WillByDefault(Return(new_strategy));

    OnEnrollmentFinishedProxy(success);
  }

  MOCK_METHOD0(OnEnrollmentStartedProxy, void());
  MOCK_METHOD1(OnEnrollmentFinishedProxy, void(bool success));

  // Simulates firing the SyncScheduler to trigger an enrollment attempt.
  CryptAuthEnroller::EnrollmentFinishedCallback FireSchedulerForEnrollment(
      cryptauth::InvocationReason expected_invocation_reason) {
    CryptAuthEnroller::EnrollmentFinishedCallback completion_callback;
    EXPECT_CALL(*next_cryptauth_enroller(),
                Enroll(_, expected_invocation_reason, _))
        .WillOnce(SaveArg<2>(&completion_callback));

    auto sync_request = make_scoped_ptr(
        new SyncScheduler::SyncRequest(enrollment_manager_.GetSyncScheduler()));
    EXPECT_CALL(*this, OnEnrollmentStartedProxy());

    SyncScheduler::Delegate* delegate =
        static_cast<SyncScheduler::Delegate*>(&enrollment_manager_);
    delegate->OnSyncRequested(sync_request.Pass());

    return completion_callback;
  }

  MockSyncScheduler* sync_scheduler() {
    return enrollment_manager_.GetSyncScheduler().get();
  }

  MockCryptAuthEnroller* next_cryptauth_enroller() {
    return enroller_factory_->next_cryptauth_enroller();
  }

  // Owned by |enrollment_manager_|.
  base::SimpleTestClock* clock_;

  // Owned by |enrollment_manager_|.
  MockCryptAuthEnrollerFactory* enroller_factory_;

  cryptauth::GcmDeviceInfo device_info_;

  TestingPrefServiceSimple pref_service_;

  TestCryptAuthEnrollmentManager enrollment_manager_;

  DISALLOW_COPY_AND_ASSIGN(ProximityAuthCryptAuthEnrollmentManagerTest);
};

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, RegisterPrefs) {
  TestingPrefServiceSimple pref_service;
  CryptAuthEnrollmentManager::RegisterPrefs(pref_service.registry());
  EXPECT_TRUE(pref_service.FindPreference(
      prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds));
  EXPECT_TRUE(pref_service.FindPreference(
      prefs::kCryptAuthEnrollmentIsRecoveringFromFailure));
  EXPECT_TRUE(pref_service.FindPreference(prefs::kCryptAuthEnrollmentReason));
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, GetEnrollmentState) {
  enrollment_manager_.Start(&pref_service_);

  ON_CALL(*sync_scheduler(), GetStrategy())
      .WillByDefault(Return(SyncScheduler::Strategy::PERIODIC_REFRESH));
  EXPECT_FALSE(enrollment_manager_.IsRecoveringFromFailure());

  ON_CALL(*sync_scheduler(), GetStrategy())
      .WillByDefault(Return(SyncScheduler::Strategy::AGGRESSIVE_RECOVERY));
  EXPECT_TRUE(enrollment_manager_.IsRecoveringFromFailure());

  base::TimeDelta time_to_next_sync = base::TimeDelta::FromMinutes(60);
  ON_CALL(*sync_scheduler(), GetTimeToNextSync())
      .WillByDefault(Return(time_to_next_sync));
  EXPECT_EQ(time_to_next_sync, enrollment_manager_.GetTimeToNextAttempt());

  ON_CALL(*sync_scheduler(), GetSyncState())
      .WillByDefault(Return(SyncScheduler::SyncState::SYNC_IN_PROGRESS));
  EXPECT_TRUE(enrollment_manager_.IsEnrollmentInProgress());

  ON_CALL(*sync_scheduler(), GetSyncState())
      .WillByDefault(Return(SyncScheduler::SyncState::WAITING_FOR_REFRESH));
  EXPECT_FALSE(enrollment_manager_.IsEnrollmentInProgress());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, InitWithDefaultPrefs) {
  EXPECT_CALL(*sync_scheduler(),
              Start(clock_->Now() - base::Time::FromDoubleT(0),
                    SyncScheduler::Strategy::AGGRESSIVE_RECOVERY));

  TestingPrefServiceSimple pref_service;
  CryptAuthEnrollmentManager::RegisterPrefs(pref_service.registry());
  enrollment_manager_.Start(&pref_service);
  EXPECT_FALSE(enrollment_manager_.IsEnrollmentValid());
  EXPECT_TRUE(enrollment_manager_.GetLastEnrollmentTime().is_null());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, InitWithExistingPrefs) {
  EXPECT_CALL(
      *sync_scheduler(),
      Start(clock_->Now() - base::Time::FromDoubleT(kLastEnrollmentTimeSeconds),
            SyncScheduler::Strategy::PERIODIC_REFRESH));

  enrollment_manager_.Start(&pref_service_);
  EXPECT_TRUE(enrollment_manager_.IsEnrollmentValid());
  EXPECT_EQ(base::Time::FromDoubleT(kLastEnrollmentTimeSeconds),
            enrollment_manager_.GetLastEnrollmentTime());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, InitWithExpiredEnrollment) {
  pref_service_.SetUserPref(
      prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds,
      new base::FundamentalValue(kLastExpiredEnrollmentTimeSeconds));

  EXPECT_CALL(*sync_scheduler(),
              Start(clock_->Now() - base::Time::FromDoubleT(
                                        kLastExpiredEnrollmentTimeSeconds),
                    SyncScheduler::Strategy::AGGRESSIVE_RECOVERY));

  enrollment_manager_.Start(&pref_service_);
  EXPECT_FALSE(enrollment_manager_.IsEnrollmentValid());
  EXPECT_EQ(base::Time::FromDoubleT(kLastExpiredEnrollmentTimeSeconds),
            enrollment_manager_.GetLastEnrollmentTime());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest,
       EnrollmentSucceedsForFirstTime) {
  pref_service_.ClearPref(prefs::kCryptAuthEnrollmentLastEnrollmentTimeSeconds);
  enrollment_manager_.Start(&pref_service_);
  EXPECT_FALSE(enrollment_manager_.IsEnrollmentValid());

  auto completion_callback =
      FireSchedulerForEnrollment(cryptauth::INVOCATION_REASON_INITIALIZATION);
  ASSERT_FALSE(completion_callback.is_null());

  clock_->SetNow(base::Time::FromDoubleT(kLaterTimeNow));
  EXPECT_CALL(*this, OnEnrollmentFinishedProxy(true));
  completion_callback.Run(true);

  EXPECT_EQ(clock_->Now(), enrollment_manager_.GetLastEnrollmentTime());
  EXPECT_TRUE(enrollment_manager_.IsEnrollmentValid());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest, ForceEnrollment) {
  enrollment_manager_.Start(&pref_service_);

  EXPECT_CALL(*sync_scheduler(), ForceSync());
  enrollment_manager_.ForceEnrollmentNow(cryptauth::INVOCATION_REASON_MANUAL);

  auto completion_callback =
      FireSchedulerForEnrollment(cryptauth::INVOCATION_REASON_MANUAL);

  clock_->SetNow(base::Time::FromDoubleT(kLaterTimeNow));
  EXPECT_CALL(*this, OnEnrollmentFinishedProxy(true));
  completion_callback.Run(true);
  EXPECT_EQ(clock_->Now(), enrollment_manager_.GetLastEnrollmentTime());
}

TEST_F(ProximityAuthCryptAuthEnrollmentManagerTest,
       EnrollmentFailsThenSucceeds) {
  enrollment_manager_.Start(&pref_service_);
  base::Time old_enrollment_time = enrollment_manager_.GetLastEnrollmentTime();

  // The first periodic enrollment fails.
  ON_CALL(*sync_scheduler(), GetStrategy())
      .WillByDefault(Return(SyncScheduler::Strategy::PERIODIC_REFRESH));
  auto completion_callback =
      FireSchedulerForEnrollment(cryptauth::INVOCATION_REASON_PERIODIC);
  clock_->SetNow(base::Time::FromDoubleT(kLaterTimeNow));
  EXPECT_CALL(*this, OnEnrollmentFinishedProxy(false));
  completion_callback.Run(false);
  EXPECT_EQ(old_enrollment_time, enrollment_manager_.GetLastEnrollmentTime());
  EXPECT_TRUE(pref_service_.GetBoolean(
      prefs::kCryptAuthEnrollmentIsRecoveringFromFailure));

  // The second recovery enrollment succeeds.
  ON_CALL(*sync_scheduler(), GetStrategy())
      .WillByDefault(Return(SyncScheduler::Strategy::AGGRESSIVE_RECOVERY));
  completion_callback =
      FireSchedulerForEnrollment(cryptauth::INVOCATION_REASON_FAILURE_RECOVERY);
  clock_->SetNow(base::Time::FromDoubleT(kLaterTimeNow + 30));
  EXPECT_CALL(*this, OnEnrollmentFinishedProxy(true));
  completion_callback.Run(true);
  EXPECT_EQ(clock_->Now(), enrollment_manager_.GetLastEnrollmentTime());
  EXPECT_FALSE(pref_service_.GetBoolean(
      prefs::kCryptAuthEnrollmentIsRecoveringFromFailure));
}

}  // namespace proximity_auth
