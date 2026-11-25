#include "window.h"
#include <GLFW/glfw3.h>

Window::Window(int width, int height) {
    window = glfwCreateWindow(width, height, "window", NULL, NULL);
}

Window::~Window() {
    glfwDestroyWindow(window);
}

void Window::set_current() {
    glfwMakeContextCurrent(window);
}

bool Window::should_close() {
    return glfwWindowShouldClose(window);
}

void Window::start() {
    int w, h;
    glfwGetFramebufferSize(window, &w, &h);
    glViewport(0, 0, w, h);
}
