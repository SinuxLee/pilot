#include <stdio.h>

#include "imgui.h"
#undef GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

class App {
public:
  App() = default;
  ~App();

  bool init();
  void run();
  void render();

  static void glfwErrorCallback(int error, const char *description) {
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
  }

protected:
  GLFWwindow *window = nullptr;
  bool show_demo_window = false;
  bool show_another_window = false;
  ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
};