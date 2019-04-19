cmake_minimum_required(VERSION 3.13)
project(MVC_Example)

set(CMAKE_CXX_STANDARD 14)

add_executable(MVC_Example main.cpp Book.cpp BookShelf.cpp View.cpp Control.cpp)