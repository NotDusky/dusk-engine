#include "game.h"

Game::Game() {}

Game::~Game() {}

void Game::init() {
  glfwInit();

  Window *window = new Window();
  window->set_current();

  gladLoadGL(glfwGetProcAddress);

  window->start();
  windows.push_back(window);
}

void Game::run() {
  while (!windows[0]->should_close()) {
    windows[0]->swap();
  }
}
