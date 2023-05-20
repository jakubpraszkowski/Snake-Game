cmake_minimum_required(VERSION 3.24)
project(Snake_Game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Snake_Game
        Logika.cpp
        Logika.h
        main.cpp
        Plansza.cpp
        Plansza.h)
