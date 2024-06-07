cmake_minimum_required(VERSION 3.10)
project(Ex22)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Ex22 main.cpp )

# Include the directory containing the header file
target_include_directories(Ex22 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})