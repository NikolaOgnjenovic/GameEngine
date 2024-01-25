# GameEngine

A 2D C++ game engine built using SFML and ImGui.

Currently following the [COMP4300 course on YouTube](https://youtube.com/playlist?list=PL_xRyXins84_Jf-aCh7chj47HR4oZLPwK&si=s-qnAyH8enwhXYK2)

## Getting Started

### Prerequisites

Make sure you have [CMake](https://cmake.org/).

### Installing Dependencies

1. Clone the `vcpkg` repository:
   ```bash
   git clone https://github.com/microsoft/vcpkg.git
   ```
   
2. Run `vcpkg` bootstrap script:
   ```bash
   cd vcpkg
   ./bootstrap-vcpkg.sh
   ```
   
3. Install SFML and ImGUI:
   ```bash
   ./vcpkg install sfml imgui
   ```
   
### Building the Project

Use CMake to generate the build files and build the project:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

### Running the Project

Run the compiled executable:
   ```bash
   ./GameEngine
   ```

## Project Structure
* [Entry point of the application](main.cpp)
* [Main game engine classes](game_engine/engine)
* [Entities and the EntityManager](game_engine/entities)
* [Components](game_engine/components)
* [Systems](game_engine/systems)