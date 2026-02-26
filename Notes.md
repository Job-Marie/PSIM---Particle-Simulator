# Projet 1 - Mini moteur de simulation de particules 2D

## Objectif 
Produire rendu propre, fonctionnel et explicable dans un délai de 5 jours avec : C++17, SFML (affichage uniquement), CMake et Git.

## Fonctionnalités
### **Obligatoire**
1. Fenêtre SFML
2. Particules (position, vitesse, masse)
3. Gravité constante
4. Intégration temporelle (Euler)
5. Rebonds sur les bords
6. Spawn de particules (au clic/automatique)
7. Couleur ou taille variable

### **Interdites**
+ textures
+ menus
+ niveaux
+ IA
+ physique réaliste avancée
+ collision entre particules
+ optimisation multithread
_(ne pas toucher, contre-productif !!!)_

## Critère de FIN
+ La commande "cmake .. && make" fonctionne
+ l'exécutable lance une simulation visible
+ Le README explique ke projet en 10 lignes
+ je peux l'explique oralement en 2 minutes

## Memo
Powershell : & "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

---

## Dev Log
### Jour 1: Setup
**Objectif** : Création d'un exécutable et affichage d'une fenêtre vide. 
**Actions** :Utilisation de cmake, gestion de conflits entre version de sfml, le compilateur, le générateur et le correcteur de code sous vscode.
**Conclusion** : sfml 3.0.2 visual studio, msvc, ninja.

### Jour 2: Une particule qui bouge + Gravité + Rebonds
**Objectif** : afficher un cercle, qui se déplace continûment, indépendamment du framerate
**Actions** : Création de Particle.hpp et Particle.cpp et affichage d'un cercle en mouvement dans une fenêtre + Intégrateur d'Euler, simulation physique et gestion de contraintes basique. 
**Conclusion** : ras