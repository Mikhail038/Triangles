cmake_minimum_required(VERSION 3.8)

project(
    Triangles
    VERSION 1.0
    LANGUAGES CXX
    )

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/dot.cpp
    src/segment.cpp
    src/polygon.cpp
    )
