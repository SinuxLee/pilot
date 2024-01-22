add_rules("mode.debug", "mode.release")
set_languages("c17", "c++17")

add_requires("imgui 1.90", {configs = {glfw_opengl3 = true}})
add_requires("glfw 3.3")
add_requires("spdlog 1.13")

target("pilot")
    set_kind("binary")
    add_files("src/*.cpp")
    add_packages("glfw")
    add_packages("spdlog")
    add_packages("imgui")
