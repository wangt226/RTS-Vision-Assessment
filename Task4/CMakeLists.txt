cmake_minimum_required(VERSION 3.10)

project(HelloCMake)

add_executable(hello main.cpp)

target_compile_features(hello PRIVATE cxx_std_11)
