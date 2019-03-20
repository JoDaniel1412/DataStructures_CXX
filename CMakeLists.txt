cmake_minimum_required(VERSION 3.13)
project(DataStructures_CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures_CXX src/main.cpp
        src/list/List_impl.h
        include/list/List.h
        src/list/Node_impl.h
        include/list/Node.h)

# Add Test if googletest is not empty
file(GLOB RESULT Test/lib/googletest)
list(LENGTH RESULT RES_LEN)
if (RES_LEN GREATER 0)
    add_subdirectory(Test)
endif ()

# Include directories #
include_directories(include)
include_directories(src)