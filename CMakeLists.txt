cmake_minimum_required(VERSION 3.16)

# project config
# main settings of the project
project(MyAswProject
VERSION 0.1.0
LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTING "Build tests" ON)

# add source configurations
add_subdirectory(src)

# add test configurations
enable_testing()
add_subdirectory(test)
