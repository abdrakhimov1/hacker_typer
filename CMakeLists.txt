cmake_minimum_required(VERSION 3.8)
project(hacker_typer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp read_into_buf.h text_drawing.h)

add_executable(hacker_typer ${SOURCE_FILES})