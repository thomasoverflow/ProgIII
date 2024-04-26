cmake_minimum_required(VERSION 3.10)
project(Projeto)

set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Projeto main.cpp Fila.cpp )

# Include the directory containing the header file
target_include_directories(Projeto PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})