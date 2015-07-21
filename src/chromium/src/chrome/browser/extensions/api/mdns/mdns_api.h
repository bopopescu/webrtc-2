// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_EXTENSIONS_API_MDNS_MDNS_API_H_
#define CHROME_BROWSER_EXTENSIONS_API_MDNS_MDNS_API_H_

#include <set>
#include <string>

#include "base/memory/scoped_ptr.h"
#include "base/threading/thread_checker.h"
#include "chrome/browser/extensions/api/mdns/dns_sd_registry.h"
#include "extensions/browser/browser_context_keyed_api_factory.h"
#include "extensions/browser/event_router.h"
#include "extensions/browser/extension_function.h"

namespace content {
class BrowserContext;
}

namespace extensions {

class DnsSdRegistry;

// MDnsAPI is instantiated with the profile and will listen for extensions that
// register listeners for the chrome.mdns extension API. It will use a registry
// class to start the mDNS listener process (if necessary) and observe new
// service events to dispatch them to registered extensions.
class MDnsAPI : public BrowserContextKeyedAPI,
                public EventRouter::Observer,
                public DnsSdRegistry::DnsSdObserver {
 public:
  explicit MDnsAPI(content::BrowserContext* context);
  ~MDnsAPI() override;

  static MDnsAPI* Get(content::BrowserContext* context);

  // BrowserContextKeyedAPI implementation.
  static BrowserContextKeyedAPIFactory<MDnsAPI>* GetFactoryInstance();

  // Used to mock out the DnsSdRegistry for testing.
  void SetDnsSdRegistryForTesting(scoped_ptr<DnsSdRegistry> registry);

 protected:
  // Retrieve an instance of the registry. Lazily created when needed.
  virtual DnsSdRegistry* dns_sd_registry();

 private:
  friend class BrowserContextKeyedAPIFactory<MDnsAPI>;

  // EventRouter::Observer:
  void OnListenerAdded(const EventListenerInfo& details) override;
  void OnListenerRemoved(const EventListenerInfo& details) override;

  // DnsSdRegistry::Observer
  void OnDnsSdEvent(const std::string& service_type,
                    const DnsSdRegistry::DnsSdServiceList& services) override;

  // BrowserContextKeyedAPI implementation.
  static const char* service_name() {
    return "MDnsAPI";
  }

  static const bool kServiceIsCreatedWithBrowserContext = true;
  static const bool kServiceIsNULLWhileTesting = true;

  // Update the current list of service types and update the registry.
  void UpdateMDnsListeners(const EventListenerInfo& details);

  // Write a message to the consoles of extensions listening to a given service
  // type.
  void WriteToConsole(const std::string& service_type,
                      content::ConsoleMessageLevel level,
                      const std::string& message);

  // Finds all all the valid listeners of the mdns.onServiceList event and
  // filters them by service type if |service_type_filter| is non-empty.  The
  // extension ids and matched service types are output to |extension_ids| and
  // |service_types|, respectively, if the supplied pointers is non-null.
  void GetValidOnServiceListListeners(const std::string& service_type_filter,
                                      std::set<std::string>* extension_ids,
                                      std::set<std::string>* service_types);

  // Ensure methods are only called on UI thread.
  base::ThreadChecker thread_checker_;
  content::BrowserContext* const browser_context_;
  // Lazily created on first access and destroyed with this API class.
  scoped_ptr<DnsSdRegistry> dns_sd_registry_;
  // Current set of service types registered with the registry.
  std::set<std::string> service_types_;

  DISALLOW_COPY_AND_ASSIGN(MDnsAPI);
};

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_API_MDNS_MDNS_API_H_
