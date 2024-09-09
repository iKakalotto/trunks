cmake_minimum_required(VERSION 3.10.2)
project(aloha)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Os")

add_library(${PROJECT_NAME} SHARED main.cc)
target_link_libraries(${PROJECT_NAME} log)
target_link_options(${PROJECT_NAME} PRIVATE -s -static-libstdc++)
