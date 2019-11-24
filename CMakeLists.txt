cmake_minimum_required(VERSION 3.15)
project(Linked_List C)

set(CMAKE_C_STANDARD 99)

add_executable(Linked_List test_list.c list.c list.h)