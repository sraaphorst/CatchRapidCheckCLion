cmake_minimum_required(VERSION 3.15)
project(instructions)

set(CMAKE_CXX_STANDARD 14)
enable_testing()
add_subdirectory(rapidcheck)
add_executable(instructions main.cpp)
target_link_libraries(instructions rapidcheck Catch)
