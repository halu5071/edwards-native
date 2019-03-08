project(unitTests)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/modules)
set(GTEST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/googletest-release-1.8.0/googletest)

include_directories("/usr/local/include")
include_directories("${GTEST_ROOT}/include")

add_executable(unitTests
        ../library.cpp
        ../library.h
        Tests.cpp)

target_link_libraries(unitTests
        ${GTEST_ROOT}/build/libgtest.a
        ${GTEST_ROOT}/build/libgtest_main.a
        pthread)