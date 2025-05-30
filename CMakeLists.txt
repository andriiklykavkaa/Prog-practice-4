cmake_minimum_required(VERSION 3.29)
project(Practice4 C)

set(CMAKE_C_STANDARD 11)

add_executable(Practice4 main.c
        string_appender.c
        string_appender.h)
