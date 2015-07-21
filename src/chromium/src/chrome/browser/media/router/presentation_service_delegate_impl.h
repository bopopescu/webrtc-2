// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_ROUTER_PRESENTATION_SERVICE_DELEGATE_IMPL_H_
#define CHROME_BROWSER_MEDIA_ROUTER_PRESENTATION_SERVICE_DELEGATE_IMPL_H_

#include <map>
#include <string>
#include <utility>

#include "base/gtest_prod_util.h"
#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "base/memory/weak_ptr.h"
#include "base/observer_list.h"
#include "chrome/browser/media/router/media_router.h"
#include "chrome/browser/media/router/media_source.h"
#include "content/public/browser/presentation_service_delegate.h"
#include "content/public/browser/web_contents_observer.h"
#include "content/public/browser/web_contents_user_data.h"

namespace content {
class RenderFrameHost;
class PresentationScreenAvailabilityListener;
class WebContents;
struct PresentationSessionInfo;
struct PresentationSessionMessage;
}  // namespace content

namespace media_router {

class MediaRoute;
class MediaSinksObserver;
class PresentationFrameManager;

// Implementation of PresentationServiceDelegate that interfaces an
// instance of WebContents with the Chrome Media Router. It uses the Media
// Router to handle presentation API calls forwarded from
// PresentationServiceImpl. In addition, it also
// provides default presentation URL that is required for creating
// browser-initiated sessions.
// It is scoped to the lifetime of a WebContents, and is managed by the
// associated WebContents.
class PresentationServiceDelegateImpl
    : public content::WebContentsUserData<PresentationServiceDelegateImpl>,
      public content::PresentationServiceDelegate {
 public:
  // Retrieves the instance of PresentationServiceDelegateImpl that was attached
  // to the specified WebContents.  If no instance was attached, creates one,
  // and attaches it to the specified WebContents.
  static PresentationServiceDelegateImpl* GetOrCreateForWebContents(
      content::WebContents* web_contents);

  ~PresentationServiceDelegateImpl() override;

  // content::PresentationServiceDelegate implementation.
  void AddObserver(
      int render_process_id,
      int render_frame_id,
      content::PresentationServiceDelegate::Observer* observer) override;
  void RemoveObserver(int render_process_id, int render_frame_id) override;
  bool AddScreenAvailabilityListener(
      int render_process_id,
      int render_frame_id,
      content::PresentationScreenAvailabilityListener* listener) override;
  void RemoveScreenAvailabilityListener(
      int render_process_id,
      int render_frame_id,
      content::PresentationScreenAvailabilityListener* listener) override;
  void Reset(int render_process_id, int render_frame_id) override;
  void SetDefaultPresentationUrl(
      int render_process_id,
      int render_frame_id,
      const std::string& default_presentation_url,
      const std::string& default_presentation_id) override;
  void StartSession(int render_process_id,
                    int render_frame_id,
                    const std::string& presentation_url,
                    const std::string& presentation_id,
                    const PresentationSessionSuccessCallback& success_cb,
                    const PresentationSessionErrorCallback& error_cb) override;
  void JoinSession(int render_process_id,
                   int render_frame_id,
                   const std::string& presentation_url,
                   const std::string& presentation_id,
                   const PresentationSessionSuccessCallback& success_cb,
                   const PresentationSessionErrorCallback& error_cb) override;
  void ListenForSessionMessages(
      int render_process_id,
      int render_frame_id,
      const PresentationSessionMessageCallback& message_cb) override;
  void SendMessage(
      int render_process_id,
      int render_frame_id,
      scoped_ptr<content::PresentationSessionMessage> message_request,
      const SendMessageCallback& send_message_cb) override;

  // Callback invoked when a |route| has been created or joined outside of a
  // Presentation API request. The route could be due to
  // browser action (e.g., browser initiated media router dialog) or
  // a media route provider (e.g., autojoin).
  void OnRouteCreated(const MediaRoute& route);

  // Returns the default MediaSource for this tab if there is one.
  // Returns an empty MediaSource otherwise.
  MediaSource default_source() const { return default_source_; }

  content::WebContents* web_contents() const { return web_contents_; }
  const GURL& default_frame_url() const { return default_frame_url_; }

  // Observer interface for listening to default MediaSource changes for the
  // WebContents.
  class DefaultMediaSourceObserver {
   public:
    virtual ~DefaultMediaSourceObserver() {}

    // Called when default media source for the corresponding WebContents has
    // changed.
    // |source|: New default MediaSource, or empty if default was removed.
    // |frame_url|: URL of the frame that contains the default media
    //     source, or empty if there is no default media source.
    virtual void OnDefaultMediaSourceChanged(const MediaSource& source,
                                             const GURL& frame_url) = 0;
  };

  // Adds / removes an observer for listening to default MediaSource changes.
  void AddDefaultMediaSourceObserver(DefaultMediaSourceObserver* observer);
  void RemoveDefaultMediaSourceObserver(DefaultMediaSourceObserver* observer);

  void SetMediaRouterForTest(MediaRouter* router);
  bool HasScreenAvailabilityListenerForTest(
      int render_process_id,
      int render_frame_id,
      const MediaSource::Id& source_id) const;

  base::WeakPtr<PresentationServiceDelegateImpl> GetWeakPtr();

 private:
  explicit PresentationServiceDelegateImpl(content::WebContents* web_contents);
  friend class content::WebContentsUserData<PresentationServiceDelegateImpl>;

  FRIEND_TEST_ALL_PREFIXES(PresentationServiceDelegateImplTest,
                           DelegateObservers);

  // Returns |listener|'s presentation URL as a MediaSource. If |listener| does
  // not have a persentation URL, returns the tab mirroring MediaSource.
  MediaSource GetMediaSourceFromListener(
      content::PresentationScreenAvailabilityListener* listener);

  void OnJoinRouteResponse(int render_process_id,
                           int render_frame_id,
                           const content::PresentationSessionInfo& session,
                           const PresentationSessionSuccessCallback& success_cb,
                           const PresentationSessionErrorCallback& error_cb,
                           scoped_ptr<MediaRoute> route,
                           const std::string& error_text);

  void OnStartSessionSucceeded(
      int render_process_id,
      int render_frame_id,
      const PresentationSessionSuccessCallback& success_cb,
      const content::PresentationSessionInfo& new_session,
      const MediaRoute::Id& route_id);

  // Returns |true| if the frame is the main frame of |web_contents_|.
  bool IsMainFrame(int render_process_id, int render_frame_id) const;

  // Updates tab-level default MediaSource and/or default frame URL. If either
  // changed, notify the observers.
  void UpdateDefaultMediaSourceAndNotifyObservers(
      const MediaSource& new_default_source,
      const GURL& new_default_frame_url);

  // Default MediaSource for the tab associated with this instance.
  MediaSource default_source_;
  // URL of the frame that contains the default MediaSource.
  GURL default_frame_url_;

  // References to the observers listening for changes to default media source.
  base::ObserverList<
      DefaultMediaSourceObserver> default_media_source_observers_;

  // References to the WebContents that owns this instance, and associated
  // browser profile's MediaRouter instance.
  content::WebContents* web_contents_;
  MediaRouter* router_;

  scoped_ptr<PresentationFrameManager> frame_manager_;

  base::WeakPtrFactory<PresentationServiceDelegateImpl> weak_factory_;

  DISALLOW_COPY_AND_ASSIGN(PresentationServiceDelegateImpl);
};

}  // namespace media_router

#endif  // CHROME_BROWSER_MEDIA_ROUTER_PRESENTATION_SERVICE_DELEGATE_IMPL_H_
