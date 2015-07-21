// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chromeos/dbus/bluetooth_media_transport_client.h"

#include "base/bind.h"
#include "base/logging.h"
#include "base/memory/ref_counted.h"
#include "base/observer_list.h"
#include "dbus/bus.h"
#include "dbus/message.h"
#include "dbus/object_manager.h"
#include "dbus/object_proxy.h"
#include "third_party/cros_system_api/dbus/service_constants.h"

namespace {

// TODO(mcchou): Add these service constants into dbus/service_constants.h
// later.
const char kBluetoothMediaTransportInterface[] = "org.bluez.MediaTransport1";

// Constants used to indicate exceptional error conditions.
const char kNoResponseError[] = "org.chromium.Error.NoResponse";
const char kUnexpectedResponse[] = "org.chromium.Error.UnexpectedResponse";

// Method names of Media Transport interface.
const char kAcquire[] = "Acquire";
const char kTryAcquire[] = "TryAcquire";
const char kRelease[] = "Release";

}  // namespace

namespace chromeos {

// static
const char BluetoothMediaTransportClient::kDeviceProperty[] = "Device";
const char BluetoothMediaTransportClient::kUUIDProperty[] = "UUID";
const char BluetoothMediaTransportClient::kCodecProperty[] = "Codec";
const char BluetoothMediaTransportClient::kConfigurationProperty[] =
    "Configuration";
const char BluetoothMediaTransportClient::kStateProperty[] = "State";
const char BluetoothMediaTransportClient::kDelayProperty[] = "Delay";
const char BluetoothMediaTransportClient::kVolumeProperty[] = "Volume";

// static
const char BluetoothMediaTransportClient::kStateIdle[] = "idle";
const char BluetoothMediaTransportClient::kStatePending[] = "pending";
const char BluetoothMediaTransportClient::kStateActive[] = "active";

BluetoothMediaTransportClient::Properties::Properties(
    dbus::ObjectProxy* object_proxy,
    const std::string& interface_name,
    const PropertyChangedCallback& callback)
    : dbus::PropertySet(object_proxy, interface_name, callback) {
  RegisterProperty(kDeviceProperty, &device);
  RegisterProperty(kUUIDProperty, &uuid);
  RegisterProperty(kCodecProperty, &codec);
  RegisterProperty(kConfigurationProperty, &configuration);
  RegisterProperty(kStateProperty, &state);
  RegisterProperty(kDelayProperty, &delay);
  RegisterProperty(kVolumeProperty, &volume);
}

BluetoothMediaTransportClient::Properties::~Properties() {
}

class BluetoothMediaTransportClientImpl
    : public BluetoothMediaTransportClient,
      public dbus::ObjectManager::Interface {
 public:
  BluetoothMediaTransportClientImpl()
      : object_manager_(nullptr), weak_ptr_factory_(this) {}

  ~BluetoothMediaTransportClientImpl() override {
    object_manager_->UnregisterInterface(kBluetoothMediaTransportInterface);
  }

  // dbus::ObjectManager::Interface overrides.

  dbus::PropertySet* CreateProperties(
      dbus::ObjectProxy* object_proxy,
      const dbus::ObjectPath& object_path,
      const std::string& interface_name) override {
    Properties* properties = new Properties(
        object_proxy,
        interface_name,
        base::Bind(&BluetoothMediaTransportClientImpl::OnPropertyChanged,
                   weak_ptr_factory_.GetWeakPtr(), object_path));
    return properties;
  }

  void ObjectAdded(const dbus::ObjectPath& object_path,
                   const std::string& interface_name) override {
    VLOG(1) << "Remote Media Transport added: " << object_path.value();
    FOR_EACH_OBSERVER(BluetoothMediaTransportClient::Observer,
                      observers_,
                      MediaTransportAdded(object_path));
  }

  void ObjectRemoved(const dbus::ObjectPath& object_path,
                     const std::string& interface_name) override {
    VLOG(1) << "Remote Media Transport removed: " << object_path.value();
    FOR_EACH_OBSERVER(BluetoothMediaTransportClient::Observer,
                      observers_,
                      MediaTransportRemoved(object_path));
  }

  // BluetoothMediaTransportClient overrides.

  void AddObserver(BluetoothMediaTransportClient::Observer* observer) override {
    DCHECK(observer);
    observers_.AddObserver(observer);
  }

  void RemoveObserver(
      BluetoothMediaTransportClient::Observer* observer) override {
    DCHECK(observer);
    observers_.RemoveObserver(observer);
  }

  Properties* GetProperties(const dbus::ObjectPath& object_path) override {
    DCHECK(object_manager_);
    return static_cast<Properties*>(
        object_manager_->GetProperties(object_path,
                                       kBluetoothMediaTransportInterface));
  }

  void Acquire(const dbus::ObjectPath& object_path,
               const AcquireCallback& callback,
               const ErrorCallback& error_callback) override {
    VLOG(1) << "Acquire - transport: " << object_path.value();

    DCHECK(object_manager_);

    dbus::MethodCall method_call(kBluetoothMediaTransportInterface, kAcquire);

    // Get object proxy.
    scoped_refptr<dbus::ObjectProxy> object_proxy(
        object_manager_->GetObjectProxy(object_path));

    // Call Acquire method of Media Transport interface.
    object_proxy->CallMethodWithErrorCallback(
        &method_call,
        dbus::ObjectProxy::TIMEOUT_USE_DEFAULT,
        base::Bind(&BluetoothMediaTransportClientImpl::OnAcquireSuccess,
                   weak_ptr_factory_.GetWeakPtr(), callback, error_callback),
        base::Bind(&BluetoothMediaTransportClientImpl::OnError,
                   weak_ptr_factory_.GetWeakPtr(), error_callback));
  }

  void TryAcquire(const dbus::ObjectPath& object_path,
                  const AcquireCallback& callback,
                  const ErrorCallback& error_callback) override {
    VLOG(1) << "TryAcquire - transport: " << object_path.value();

    DCHECK(object_manager_);

    dbus::MethodCall method_call(kBluetoothMediaTransportInterface,
                                 kTryAcquire);

    // Get object proxy.
    scoped_refptr<dbus::ObjectProxy> object_proxy(
        object_manager_->GetObjectProxy(object_path));

    // Call TryAcquire method of Media Transport interface.
    object_proxy->CallMethodWithErrorCallback(
        &method_call,
        dbus::ObjectProxy::TIMEOUT_USE_DEFAULT,
        base::Bind(&BluetoothMediaTransportClientImpl::OnAcquireSuccess,
                   weak_ptr_factory_.GetWeakPtr(), callback, error_callback),
        base::Bind(&BluetoothMediaTransportClientImpl::OnError,
                   weak_ptr_factory_.GetWeakPtr(), error_callback));
  }

  void Release(const dbus::ObjectPath& object_path,
               const base::Closure& callback,
               const ErrorCallback& error_callback) override {
    VLOG(1) << "Release - transport: " << object_path.value();

    DCHECK(object_manager_);

    dbus::MethodCall method_call(kBluetoothMediaTransportInterface, kRelease);

    // Get object proxy.
    scoped_refptr<dbus::ObjectProxy> object_proxy(
        object_manager_->GetObjectProxy(object_path));

    // Call TryAcquire method of Media Transport interface.
    object_proxy->CallMethodWithErrorCallback(
        &method_call,
        dbus::ObjectProxy::TIMEOUT_USE_DEFAULT,
        base::Bind(&BluetoothMediaTransportClientImpl::OnSuccess,
                   weak_ptr_factory_.GetWeakPtr(), callback),
        base::Bind(&BluetoothMediaTransportClientImpl::OnError,
                   weak_ptr_factory_.GetWeakPtr(), error_callback));
  }

 protected:
  void Init(dbus::Bus* bus) override {
    DCHECK(bus);
    object_manager_ = bus->GetObjectManager(
        bluetooth_object_manager::kBluetoothObjectManagerServiceName,
        dbus::ObjectPath(
            bluetooth_object_manager::kBluetoothObjectManagerServicePath));
    object_manager_->RegisterInterface(kBluetoothMediaTransportInterface,
                                       this);
  }

 private:
  // Called by dbus::PropertySet when a property value is changed.
  void OnPropertyChanged(const dbus::ObjectPath& object_path,
                         const std::string& property_name) {
    VLOG(1) << "Name of the changed property: " << property_name;

    // Dispatches the change to the corresponding property-changed handler.
    FOR_EACH_OBSERVER(
        BluetoothMediaTransportClient::Observer, observers_,
        MediaTransportPropertyChanged(object_path, property_name));
  }

  // Called when a response for successful method call is received.
  void OnSuccess(const base::Closure& callback,
                 dbus::Response* response) {
    DCHECK(response);
    callback.Run();
  }

  // Called when a response for |Acquire|/|TryAcquire| method call is received.
  void OnAcquireSuccess(const AcquireCallback& callback,
                        const ErrorCallback& error_callback,
                        dbus::Response* response) {
    DCHECK(response);

    dbus::FileDescriptor fd;
    uint16_t read_mtu;
    uint16_t write_mtu;

    // Parse the response.
    dbus::MessageReader reader(response);
    if (reader.PopFileDescriptor(&fd) &&
        reader.PopUint16(&read_mtu) &&
        reader.PopUint16(&write_mtu)) {
      fd.CheckValidity();
      DCHECK(fd.is_valid());

      VLOG(1) << "OnAcquireSuccess - fd: "<<  fd.value()
              <<", read MTU: " << read_mtu
              <<", write MTU: " << write_mtu;

      // The ownership of the file descriptor is transferred to the user
      // application.
      callback.Run(&fd, read_mtu, write_mtu);
      return;
    }

    error_callback.Run(
        kUnexpectedResponse,
        "Failed to retrieve file descriptor, read MTU and write MTU.");
  }

  // Called when a response for a failed method call is received.
  void OnError(const ErrorCallback& error_callback,
               dbus::ErrorResponse* response) {
    DCHECK(response);

    // Error response has optional error message argument.
    std::string error_name;
    std::string error_message;
    if (response) {
      dbus::MessageReader reader(response);
      error_name = response->GetErrorName();
      reader.PopString(&error_message);
    } else {
      error_name = kNoResponseError;
    }
    error_callback.Run(error_name, error_message);
  }

  dbus::ObjectManager* object_manager_;

  // List of observers interested in event notifications from us.
  base::ObserverList<BluetoothMediaTransportClient::Observer> observers_;

  base::WeakPtrFactory<BluetoothMediaTransportClientImpl> weak_ptr_factory_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothMediaTransportClientImpl);
};

BluetoothMediaTransportClient::BluetoothMediaTransportClient() {
}

BluetoothMediaTransportClient::~BluetoothMediaTransportClient() {
}

BluetoothMediaTransportClient* BluetoothMediaTransportClient::Create() {
  return new BluetoothMediaTransportClientImpl();
}

}  // namespace chromeos
