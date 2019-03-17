cmake_minimum_required(VERSION 3.13)
project(DataStructures_CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures_CXX src/main.cpp
        src/list/List_impl.h
        src/list/List.h
        src/list/Node_impl.h
        src/list/Node.h

        test/list/ListTest.cpp test/list/NodeTest.cpp)

# GoogleTest Include #
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

target_link_libraries(DataStructures_CXX gtest gtest_main)

#List Include #
include_directories(src/list)