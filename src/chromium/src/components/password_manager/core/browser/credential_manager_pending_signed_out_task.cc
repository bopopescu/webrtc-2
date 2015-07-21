// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/password_manager/core/browser/credential_manager_pending_signed_out_task.h"

#include "components/autofill/core/common/password_form.h"
#include "components/password_manager/core/browser/password_store.h"
#include "url/gurl.h"

namespace password_manager {

CredentialManagerPendingSignedOutTask::CredentialManagerPendingSignedOutTask(
    CredentialManagerPendingSignedOutTaskDelegate* delegate,
    const GURL& origin)
    : delegate_(delegate) {
  origins_.insert(origin.spec());
}

CredentialManagerPendingSignedOutTask::
    ~CredentialManagerPendingSignedOutTask() = default;

void CredentialManagerPendingSignedOutTask::AddOrigin(const GURL& origin) {
  origins_.insert(origin.spec());
}

void CredentialManagerPendingSignedOutTask::OnGetPasswordStoreResults(
    ScopedVector<autofill::PasswordForm> results) {
  PasswordStore* store = delegate_->GetPasswordStore();
  for (autofill::PasswordForm* form : results) {
    if (origins_.count(form->origin.spec())) {
      form->skip_zero_click = true;
      // Note that UpdateLogin ends up copying the form while posting a task to
      // update the PasswordStore, so it's fine to let |results| delete the
      // original at the end of this method.
      store->UpdateLogin(*form);
    }
  }

  delegate_->DoneSigningOut();
}

}  // namespace password_manager
