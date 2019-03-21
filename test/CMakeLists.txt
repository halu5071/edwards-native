project(unitTests)
cmake_minimum_required(VERSION 2.8)

set(GTEST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/googletest-release-1.8.0/googletest)
set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/..)
set(CMAKE_CXX_FLAGS "-std=c++11")

include_directories("/usr/local/include")
include_directories("${GTEST_ROOT}/include")

add_executable(unitTests
		../library.h
		../library.cpp
		../point.h
		../point.cpp
		../binary_array.h
		../binary_array.cpp
		../inverse.h
		../inverse.cpp
		ScalarMultipleTests.cpp
		PointTest.cpp
		ArrayTest.cpp)

if (UNIX AND NOT APPLE)
	target_link_libraries(unitTests
			${GTEST_ROOT}/build/libgtest.a
			${GTEST_ROOT}/build/libgtest_main.a
			${PROJECT_ROOT}/lib/linux-x86-64/libgmp.so
			pthread)
endif (UNIX AND NOT APPLE)

if (APPLE)
	target_link_libraries(unitTests
			${GTEST_ROOT}/build/libgtest.a
			${GTEST_ROOT}/build/libgtest_main.a
			${PROJECT_ROOT}/lib/darwin/libgmp.dylib
			pthread)
endif (APPLE)
