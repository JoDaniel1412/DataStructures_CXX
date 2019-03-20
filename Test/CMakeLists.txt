cmake_minimum_required(VERSION 3.13)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp
        list/ListTest.cpp
        list/NodeTest.cpp)

# Include Directories #
include_directories(../include)
include_directories(../src)

# GoogleTest Include #
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
target_link_libraries(Test gtest gtest_main)