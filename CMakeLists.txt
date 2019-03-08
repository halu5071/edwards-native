cmake_minimum_required(VERSION 3.12)
project(libpoint)

set(CMAKE_CXX_STANDARD 11)

add_library(point library.cpp library.h)

add_subdirectory(test)