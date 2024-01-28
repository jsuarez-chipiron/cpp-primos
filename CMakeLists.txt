cmake_minimum_required(VERSION 3.5)

project(CHANGEME)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")

add_executable(bench benchmark.cpp)
target_link_libraries(bench -lbenchmark)

# target_include_directories(main PRIVATE /home/javier/Tech/cpp/concepts_cpp/ranges/range-v3/include)
# target_link_libraries(main -ltimer)
# target_link_libraries(main /usr/local/lib/libtimer.a) 
