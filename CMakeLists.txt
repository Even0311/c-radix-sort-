cmake_minimum_required(VERSION 3.5)
project(6771assign6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BucketSort.cpp BucketSort.h)
add_executable(6771assign6 ${SOURCE_FILES})