cmake_minimum_required(VERSION 3.0...3.25)
project(
    LearnWebGPU
    VERSION 0.1.0
    LANGUAGES CXX C
)
add_subdirectory(glfw)

add_executable(App main.cpp)
target_link_libraries(App PRIVATE glfw)

set_target_properties(App PROPERTIES
    CXX_STANDARD 17
    COMPILE_WARNING_AS_ERROR ON
)

if (MSVC)
    target_compile_options(App PRIVATE /W4)
else()
    target_compile_options(App PRIVATE -Wall -Wextra -pedantic)
endif()