cmake_minimum_required(VERSION 3.16)

project(psim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# Chemin vers SFML
# Adjust path to the 'lib/cmake/SFML' subfolder of your SFML SDK
set(SFML_DIR "C:/SFML/SDK/SFML-3.0.2 msvc/lib/cmake/SFML")

find_package(SFML COMPONENTS Graphics Window System REQUIRED)

add_executable(psim
    src/main.cpp
    src/Particle.cpp
    src/Simulator.cpp
)

target_link_libraries(psim
    SFML::Graphics
    SFML::Window
    SFML::System
)