cmake_minimum_required(VERSION 3.13)
project(DataStructures_CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures_CXX test/main.cpp
        src/list/List_impl.h
        include/list/List.h
        src/list/Node_impl.h
        include/list/Node.h

        test/list/ListTest.cpp test/list/NodeTest.cpp)

# GoogleTest Include #
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
target_link_libraries(DataStructures_CXX gtest gtest_main)

#Dir Include #
include_directories(include)
include_directories(src)