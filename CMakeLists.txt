cmake_minimum_required(VERSION 3.13)
project(thinking_in_cpp01)
set(CMAKE_CXX_STANDARD 17)
include_directories(.)
set(SOURCE_FILES main.cpp)

file(GLOB SOURCES
        ${PROJECT_SOURCE_DIR}/chapter02/exercises/*.cpp
        )

add_executable(thinking_in_cpp01 ${SOURCE_FILES} ${SOURCES})