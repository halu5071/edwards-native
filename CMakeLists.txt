cmake_minimum_required(VERSION 2.8)
project(point)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++11")
include_directories("/usr/local/include")

set(CMAKE_MACOSX_RPATH 1)
set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_library(point SHARED
        library.cpp
        library.h
        binary_array.cpp
        binary_array.h
        point.cpp
        point.h
        inverse.cpp
        inverse.h)

if (UNIX AND NOT APPLE)
    target_link_libraries(point
            ${PROJECT_ROOT}/lib/linux-x86-64/libgmp.so)
endif (UNIX AND NOT APPLE)

if (APPLE)
    target_link_libraries(point
            ${PROJECT_ROOT}/lib/darwin/libgmp.dylib)
endif (APPLE)

add_subdirectory(test)