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

## Compilation (Sous Windows avec CMake) 
```bash
mkdir build
cd build
cmake ..
cmake --build .
```
Notez que vous avez besoin d'avoir SFML 3 installé sur votre machine pour compiler.
Pensez à adapter le fichier CMakeLists.txt et assurez-vous que les DLL SFML sont accessibles à l’exécution.

## Utilisation alternative : Juste pour tester le programme (Windows seulement)
Naviguer dans build, puis lancer l'executable psim.exe
