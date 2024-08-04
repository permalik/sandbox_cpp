# CMakeLists.txt
cmake_minimum_required(VERSION 3.10) # Specify the minimum version of CMake
project(array CXX)      # Define the project name and language

# Set the C standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add compile_options for debug information
add_compile_options(-g)
# target_compile_options(array PRIVATE -g -Wall -Wextra -Werror -O0)

# Add compile options for different build types
# if(CMAKE_BUILD_TYPE STREQUAL "Debug")
#     target_compile_options(MyProject PRIVATE -g -O0)
# elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
#     target_compile_options(MyProject PRIVATE -O3)
# endif()

# Specify the source files and header files
set(SOURCES
    ./array.cpp
)

# set(HEADERS
#     ./header.h
# )

# Create an executable target
add_executable(array ${SOURCES})

# Optionally, specify include directories (e.g., if you have headers in other directories)
# target_include_directories(array PRIVATE src)

# Add custom commands for cleaning up files
# CMake handles cleaning up build files automatically, so no need for custom commands.

# Optionally, you can add a version number to the target
# set_target_properties(MyProject PROPERTIES VERSION )
