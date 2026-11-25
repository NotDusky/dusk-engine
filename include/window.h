#pragma once
#define GLAD_GL_IMPLEMENTATION
#include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

class Window {
public:
    Window(int width = 640, int height = 480);
    ~Window();

    void set_current();

    bool should_close();

    void start();

    inline void swap() {
        glfwSwapBuffers(window);
    }

private:
    GLFWwindow* window;
};
