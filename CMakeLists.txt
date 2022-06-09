cmake_minimum_required(VERSION 3.21)
project(BPlusTree)

set(CMAKE_CXX_STANDARD 14)

add_executable(BPlusTree main.cpp BPlusTree.cpp BPlusTree.h)
