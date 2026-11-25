#define GLAD_GL_IMPLEMENTATION
#include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include "include/game.h"

int main (int argc, char** argv) {
    Game game;
    game.init();
    game.run();

    return 0;
}
