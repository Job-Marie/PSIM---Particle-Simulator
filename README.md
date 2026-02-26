# psim — Particle Simulation in C++

psim est une simulation simple de particules 2D écrite en C++ avec SFML 3.

## Fonctionnalités
- Simulation de particules avec gravité constante
- Intégration temporelle indépendante du framerate
- Rebonds sur les bords de la fenêtre
- Création de particules à la souris
- Architecture simple et modulaire (Particle / Simulator)

## Technologies
- C++17
- SFML 3.0.2
- CMake

## Compilation (Windows)
```bash
mkdir build
cd build
cmake ..
cmake --build .