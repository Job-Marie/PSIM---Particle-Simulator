#pragma once
#include <vector>
#include "Particle.hpp"

class Simulator {
    private :
    vector<Particle> particles;

    public :
    void update(float dt);
    void addParticle(const Particle& p);

    vector<Particle>& getParticles();
};