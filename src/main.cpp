#include <memory>

#include "app.h"
#include "spdlog/spdlog.h"

int main(int, char **) {
  auto app = std::make_shared<App>();
  if (!app->init()) {
    spdlog::error("failed to init app");
    return -1;
  }

  spdlog::info("app running");
  app->run();
  return 0;
}
