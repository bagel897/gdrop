#include "connections/core.h"
#include <iostream>
int main() {
  location::nearby::connections::ServiceControllerRouter *router =
      new location::nearby::connections::ServiceControllerRouter();
  location::nearby::connections::Core core(router);
  absl::string_view id("Hi");
  location::nearby::connections::AdvertisingOptions adops;
  location::nearby::connections::ConnectionRequestInfo info;
  location::nearby::connections::ResultCallback callback;
  core.StartAdvertising(id, adops, info, callback);
  int temp;
  std::cin >> temp;
  core.StopAdvertising(callback);
}
