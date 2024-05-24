cmake_minimum_required(VERSION 3.10)
project(Ex14)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Ex19 main.cpp )

# Include the directory containing the header file
target_include_directories(Ex19 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})