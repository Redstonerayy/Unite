cmake_minimum_required(VERSION 3.10)

# set the project name
project(unite)
include_directories(${PROJECT_SOURCE_DIR}/src/headers/)
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/cpp/*.cpp)
# add the executable
add_executable(unite src/main.cpp ${SRC_FILES})