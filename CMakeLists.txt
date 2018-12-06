cmake_minimum_required(VERSION 3.12)
project(TBA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TBA
        main.cpp
        stack.cpp
        stack.h
        welcome.cpp
        welcome.h)
