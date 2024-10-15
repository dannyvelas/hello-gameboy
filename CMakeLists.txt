# Minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(GameboyProject)

# Define the compiler
set(CMAKE_C_COMPILER /Users/dannyvelasquez/.bin/gbdk/bin/lcc)

# Add the source file
add_executable(main.gb main.c)

# Add the custom commands for object file creation
add_custom_command(
    OUTPUT main.o
    COMMAND ${CMAKE_C_COMPILER} -c -o main.o main.c
    DEPENDS main.c
)

# Add the custom target to build the .gb file
add_custom_command(
    OUTPUT main.gb
    COMMAND ${CMAKE_C_COMPILER} -o main.gb main.o
    DEPENDS main.o
)

# Ensure main.gb is the final target
add_custom_target(
    gb_file ALL
    DEPENDS main.gb
)
