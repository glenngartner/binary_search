cmake_minimum_required(VERSION 3.8)
project(binary_search)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/RandomListGenerator.cpp include/RandomListGenerator.h src/BinarySearch.cpp include/BinarySearch.h)
add_executable(binary_search ${SOURCE_FILES})