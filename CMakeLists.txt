cmake_minimum_required(VERSION 3.22)

project(GameOfLife LANGUAGES CXX)

# --- C++ standard ---
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



# --- vcpkg toolchain ---


# --- Find dependencies ---
# SFML 3 installed via vcpkg
find_package(SFML CONFIG REQUIRED COMPONENTS Graphics Window System)

# ImGui and fmt installed via vcpkg
find_package(imgui CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

# --- Executable ---
add_executable(gameOfLife
    src/main.cpp
)

# --- Include directories ---
target_include_directories(gameOfLife PRIVATE src)

# --- Link libraries ---
target_link_libraries(gameOfLife
    PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
        imgui::imgui
        fmt::fmt
)

# --- Compiler options ---
if(MSVC)
    target_compile_options(gameOfLife PRIVATE /W4 /permissive-)
else()
    target_compile_options(gameOfLife PRIVATE -Wall -Wextra -Wpedantic)
endif()

# --- Output directory ---
set_target_properties(gameOfLife PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
