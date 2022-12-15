cmake_minimum_required(VERSION 3.21)
project(sorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorting
        main.cpp
        mergeSort.cpp
        countingSort.cpp)
