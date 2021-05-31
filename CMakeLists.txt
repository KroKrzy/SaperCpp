cmake_minimum_required(VERSION 3.0)

project(sapercpp)

add_executable(sapercpp main.cpp)

install(TARGETS sapercpp RUNTIME DESTINATION bin)
