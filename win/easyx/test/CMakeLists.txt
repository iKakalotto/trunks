cmake_minimum_required(VERSION 3.16)
project(app)

include_directories(../include)
link_directories(../lib64)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Os -s")

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME} easyx)
