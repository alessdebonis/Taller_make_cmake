cmake_minimum_required(VERSION 3.10)
project(matecas_app)

include_directories(include)
add_executable(matecas_app src/main.cpp src/matecas.cpp)