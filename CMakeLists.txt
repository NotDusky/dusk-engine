cmake_minimum_required(VERSION 4.0)

project(dusk_engine VERSION 0.0.1)

add_executable(dusk_engine
    main.cpp
    src/game.cpp
    src/window.cpp
    glad/src/gl.c
)

target_link_libraries(dusk_engine
    PUBLIC
    glfw
)

target_include_directories(dusk_engine
    PUBLIC
    "./include"
    "./glad/include"
)
