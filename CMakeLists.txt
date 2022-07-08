cmake_minimum_required(VERSION 3.10)

project(TestingCMake LANGUAGES CXX)

add_executable(TestingCMake src/Source.cpp)
target_compile_features(TestingCMake PRIVATE cxx_std_17)
target_sources(TestingCMake PRIVATE include/Index.hpp)

message("Compilation complete!")