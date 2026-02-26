#pragma once
#include <SFML/System/Vector2.hpp>
using namespace std;
using namespace sf;

struct Particle {
    Vector2f position;
    Vector2f velocity;

    void update(float dt);
};