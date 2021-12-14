cmake_minimum_required(VERSION 3.19)
project(Tests)

set(CMAKE_CXX_STANDARD 20)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_subdirectory(lib/googletest-master)
add_executable(Tests ArraySequence.cpp DynamicArray.cpp LinkedList.cpp ListSequence.cpp)
target_link_libraries(Tests gtest gtest_main)