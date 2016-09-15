cmake_minimum_required(VERSION 3.5)
project(QueueMachine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Queue.cpp Queue.h MachineReader.cpp MachineReader.h)
add_executable(QueueMachine ${SOURCE_FILES})