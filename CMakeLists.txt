cmake_minimum_required(VERSION 2.8)
add_definitions("-Wall -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
add_executable(vscode_proj
    main.cpp
    hello_world.cpp
    fizz_buzz.cpp
)
