cmake_minimum_required(VERSION 3.22)
project(SuzuranRenderer)
set(pybind11_DIR ext/pybind11)
#find_package(PythonLibs REQUIRED)
find_package(pybind11 CONFIG HINTS "ext/pybind11")
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
include_directories(include/) 
include_directories(${EXT_DIR})
add_subdirectory(ext/pybind11)
include_directories(ext/pybind11/include)
include_directories(${PYTHON_INCLUDE_DIRS})

add_executable(SuzuranRenderer
        src/main.cpp src/Core.h src/Shader.cpp src/Scene.cpp src/ltc.h ${3rdparty} src/Model.cpp ext/3rdparty/glad.c src/suzuran_py.cpp src/SceneParse.cpp)

pybind11_add_module(suzuran src/suzuran_py.cpp src/Core.h src/Shader.cpp src/Scene.cpp src/ltc.h ${3rdparty} src/Model.cpp ext/3rdparty/glad.c src/suzuran_py.cpp src/SceneParse.cpp)


target_link_libraries(${PROJECT_NAME} PUBLIC glfw ${PYTHON_LIBRARIES})
target_link_libraries(suzuran PUBLIC glfw ${PYTHON_LIBRARIES})

