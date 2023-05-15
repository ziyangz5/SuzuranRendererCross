cmake_minimum_required(VERSION 3.22)
project(SuzuranRenderer)

set(CMAKE_CXX_STANDARD 17)
set(EXT_DIR "ext/")
set(GLAD_DIR "${EXT_DIR}/glad" )
set(GLAD_INCLUDE "${GLAD_DIR}/include/glad" )
set(GLAD_SRC "${GLAD_DIR}/src" )
file(GLOB 3rdparty
        "${EXT_DIR}/3rdparty/*.h"
        "${EXT_DIR}/3rdparty/*.hpp"
        "${EXT_DIR}/3rdparty/*.cpp"
        "${EXT_DIR}/3rdparty/*.c"
        )
include_directories(.)
include_directories(include/)
include_directories(${EXT_DIR})

add_executable(SuzuranRenderer
        src/main.cpp src/Core.h src/Shader.cpp src/Scene.cpp src/ltc.h ${3rdparty} src/Model.cpp ext/3rdparty/glad.c)

target_link_libraries(${PROJECT_NAME} PUBLIC glfw)


