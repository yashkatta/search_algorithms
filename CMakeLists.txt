cmake_minimum_required(VERSION 3.14)

# Version Information 
project(search_algorithm) 

# Add library ----------------------------------------
add_subdirectory(src)

# Set compiler options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -DDEBUG")

# Add Executable ----------------------------------------
add_executable(search_algorithm main.cpp)

target_link_libraries(search_algorithm Search)