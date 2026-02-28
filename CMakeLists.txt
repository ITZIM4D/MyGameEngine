cmake_minimum_required(VERSION 4.0.0)
project(myGameEngine)

add_executable(myGameEngine
    src/main.cpp
    src/Window.cpp
    external/glad/src/glad.c
    src/ImageLoader.cpp
)

include_directories(
    include
    external
    external/glfw/include
    external/glad/include
)

target_link_directories(
    myGameEngine PRIVATE external/glfw/lib-universal
)

target_link_libraries(
    myGameEngine PRIVATE glfw3
    "-framework Cocoa"
    "-framework IOKit"
    "-framework CoreFoundation"
)