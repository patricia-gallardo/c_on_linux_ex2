cmake_minimum_required(VERSION 3.14)
project(c_on_linux_ex2 C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(tokenizer src/main.c include/csv.h src/csv.c)