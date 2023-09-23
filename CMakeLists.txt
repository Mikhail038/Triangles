cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_CXX_FLAGS_INIT "-Werror -Wall -Wextra -Wpedantic -Iarray -Igeometry")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -D _DEBUG -ggdb3 -Wall -Wextra -Weffc++ -Waggressive-loop-optimizations -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wno-narrowing -Wno-old-style-cast -fcheck-new -fstack-protector -fsanitize=address -fsanitize=alignment -fsanitize=bounds -fsanitize=enum -fsanitize=float-cast-overflow -fsanitize=float-divide-by-zero -fsanitize=integer-divide-by-zero -fsanitize=leak -fsanitize=nonnull-attribute -fsanitize=null -fsanitize=object-size -fsanitize=return -fsanitize=returns-nonnull-attribute -fsanitize=signed-integer-overflow -fsanitize=undefined -fsanitize=unreachable -fsanitize=vptr -Og")

project(
    Triangles
    VERSION 1.0
    LANGUAGES CXX
    )

include_directories(Source Source/Array Source/Geometry Array Geometry)

add_executable(${PROJECT_NAME} Source/main.cpp)


# add_library(array
#     Source/Array/arrayT.hpp
# )

add_library(geometry
    Source/Geometry/dot.cpp
    Source/Geometry/dot.hpp
    Source/Geometry/segment.cpp
    Source/Geometry/segment.hpp
    Source/Geometry/polygon.cpp
    Source/Geometry/polygon.hpp
)
# target_link_libraries(geometry
#     PUBLIC array
# )

target_link_libraries(${PROJECT_NAME}
    PUBLIC geometry
    # PUBLIC array
)
