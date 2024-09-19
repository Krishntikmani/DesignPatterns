# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(ObserverPattern)

# Set C++ standard (optional but recommended)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the directories containing headers
include_directories(inc)

# Including the source files
file(GLOB SOURCES "main.cpp" "src/*.cpp")

# Add the executable (sources in src/ folder)
add_executable(App ${SOURCES})