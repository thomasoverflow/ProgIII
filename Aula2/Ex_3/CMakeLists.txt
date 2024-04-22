cmake_minimum_required(VERSION 3.10)
project(Matrix)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Matrix main.cpp Matrix.cpp)

# Include the directory containing the header file
target_include_directories(Matrix PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})