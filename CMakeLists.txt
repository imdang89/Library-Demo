cmake_minimum_required(VERSION 3.0.0)
project(library VERSION 0.1.0)

include_directories(include)
file(GLOB SOURCES "source/*.cpp")

add_executable(library ${SOURCES})
