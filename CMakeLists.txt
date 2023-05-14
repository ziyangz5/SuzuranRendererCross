cmake_minimum_required(VERSION 3.25)
project(SuzuranRenderer)

set(CMAKE_CXX_STANDARD 17)
set(EXT_DIR "ext/")
set(GLAD_DIR "${EXT_DIR}/glad" )
set(GLAD_INCLUDE "${GLAD_DIR}/include" )
set(GLAD_SRC "${GLAD_DIR}/src" )
file(GLOB 3rdparty
        "${EXT_DIR}/3rdparty/*.h"
        "${EXT_DIR}/3rdparty/*.hpp"
        "${EXT_DIR}/3rdparty/*.cpp"
        "${EXT_DIR}/3rdparty/*.c"
        )
include_directories(.)
include_directories(ext/)

add_executable(SuzuranRenderer
        src/main.cpp src/Core.h ${GLAD_SRC}/glad.c src/Shader.cpp src/Scene.cpp src/ltc.h ${3rdparty} src/Model.cpp)

target_link_libraries(${PROJECT_NAME} glfw)

target_include_directories ( ${PROJECT_NAME}
        PRIVATE
        ${GLAD_INCLUDE}

        )


