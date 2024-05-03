cmake_minimum_required(VERSION 3.10)
project(Ex12)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Ex12 main.cpp )

# Include the directory containing the header file
target_include_directories(Ex12 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})