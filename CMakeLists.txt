cmake_minimum_required(VERSION 3.13)
project(DataStructures_CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures_CXX main.cpp
        src/list/List.cpp
        src/list/List.h
        src/list/Node.cpp
        src/list/Node.h

        test/list/ListTest.cpp )

# GoogleTest Include #
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

target_link_libraries(DataStructures_CXX gtest gtest_main)

#List Include #
include_directories(src/list)