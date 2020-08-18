cmake_minimum_required(VERSION 3.16)
project(ShellSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(ShellSort main.cpp SelectionSort.h InsertionSort.h SortTestHelper.h BubbleSort.h)