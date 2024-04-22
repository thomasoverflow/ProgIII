cmake_minimum_required(VERSION 3.10)
project(Circulo)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Circulo main.cpp Circulo.cpp)

# Include the directory containing the header file
target_include_directories(Circulo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})