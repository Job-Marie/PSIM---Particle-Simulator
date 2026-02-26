#include "Particle.hpp"

static constexpr float GRAVITY = 500.f; // pixels/s²

void Particle::update(float dt) {
    velocity.y += GRAVITY * dt;
    position += velocity * dt;
}