cmake_minimum_required(VERSION 3.16)
project(OptimizedSelectionSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(OptimizedSelectionSort main.cpp SortTestHelper.h SelectionSort.h InsertionSort.h)