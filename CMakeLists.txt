cmake_minimum_required(VERSION 3.26)
project(GameEngine)

set(CMAKE_CXX_STANDARD 20)

# Integrate vcpkg with CMake
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")

# Find required packages
find_package(SFML REQUIRED COMPONENTS system window graphics network audio)
find_package(imgui REQUIRED)
find_package(ImGui-SFML CONFIG REQUIRED)

# Add your executable and link against the required libraries
add_executable(GameEngine main.cpp
        game_engine/entities/Entity.cpp
        game_engine/entities/Entity.h
        game_engine/entities/EntityManager.cpp
        game_engine/entities/EntityManager.h
        game_engine/components/CTransform.cpp
        game_engine/components/CTransform.h
        game_engine/components/CName.cpp
        game_engine/components/CName.h
        game_engine/components/CShape.cpp
        game_engine/components/CShape.h
        game_engine/components/CBBox.cpp
        game_engine/components/CBBox.h
        game_engine/engine/Engine.cpp
        game_engine/engine/Engine.h
        game_engine/systems/SRender.cpp
        game_engine/systems/SRender.h)

target_link_libraries(GameEngine PRIVATE sfml-system sfml-window sfml-graphics sfml-network sfml-audio imgui::imgui ImGui-SFML::ImGui-SFML)
