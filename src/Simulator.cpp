#include "Simulator.hpp"

void Simulator::update(float dt) {
    for(auto& p : particles) {
        p.update(dt);
    }
}

void Simulator::addParticle(const Particle& p) {
    particles.push_back(p);
}

vector<Particle>& Simulator::getParticles() {
    return particles;
}