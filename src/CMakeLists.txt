# Add Library files
add_library(Search 
    LinearSearch.cpp
    BinarySearch.cpp)

target_include_directories(Search PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")