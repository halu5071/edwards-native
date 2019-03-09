cmake_minimum_required(VERSION 2.8)
project(point)

set(CMAKE_CXX_STANDARD 11)
include_directories("/usr/local/include")

set(CMAKE_MACOSX_RPATH 1)

add_library(point SHARED
        library.cpp
        library.h)

add_subdirectory(test)