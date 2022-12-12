cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

project(SimpleRPG)

add_executable(SimpleRPG
    "src/game.cpp"
    "src/Hero.cpp")