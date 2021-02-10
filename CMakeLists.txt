project(broken-linkage)
cmake_minimum_required(VERSION 3.10)
add_executable(exe main.c)
target_link_libraries(exe crypto)