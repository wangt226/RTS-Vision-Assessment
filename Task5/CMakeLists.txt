cmake_minimum_required(VERSION 3.10)

project(Task5_OpenCV)

find_package(OpenCV REQUIRED)

add_executable(opencv_demo main.cpp)

target_link_libraries(opencv_demo ${OpenCV_LIBS})
