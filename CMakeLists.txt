cmake_minimum_required(VERSION 3.22)

project(GameOfLife LANGUAGES CXX)

# --- C++ standard ---
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- Dependencies ---
include(FetchContent)

# SFML (download via FetchContent)
FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_BRANCH main  # or a specific commit
)

FetchContent_MakeAvailable(sfml)

# ImGui (download via FetchContent)
FetchContent_Declare(
    imgui
    GIT_REPOSITORY https://github.com/ocornut/imgui.git
    GIT_TAG v1.89.8   # or latest stable
)

FetchContent_MakeAvailable(imgui)

# fmt (system-installed)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 10.1.1  # or whatever version you want
)

FetchContent_MakeAvailable(fmt)

# --- Executable ---
add_executable(gameOfLife
    src/main.cpp
)

# --- Include directories ---
target_include_directories(gameOfLife PRIVATE src)

# --- Link libraries ---
target_link_libraries(gameOfLife PRIVATE sfml-graphics sfml-window sfml-system)
target_link_libraries(gameOfLife PRIVATE fmt::fmt)

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
