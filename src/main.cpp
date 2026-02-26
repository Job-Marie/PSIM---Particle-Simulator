#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>
#include <optional>

#include "Particle.hpp"
#include "Simulator.hpp"

int main() 
{
    constexpr float WIDTH = 800.f;
    constexpr float HEIGHT = 600.f;
    constexpr float RADIUS = 10.f;

    sf::RenderWindow window(sf::VideoMode({(unsigned)WIDTH, (unsigned)HEIGHT}), "Particule Simulator - Jour 2");

    Clock clock;
    Simulator simulator;

    CircleShape shape(RADIUS);
    shape.setFillColor(Color::White);
    shape.setOrigin({RADIUS, RADIUS});

    while(window.isOpen()) {
        const float dt = clock.restart().asSeconds();
        //std::cout<<dt<<"\n";

        while(const std::optional event = window.pollEvent()) {
            if(event->is<Event::Closed>()) {
                window.close();
            }
            if(event->is<Event::MouseButtonPressed>()) {
                const auto& mouse = event->getIf<Event::MouseButtonPressed>();
                Particle p;
                p.position = {static_cast<float>(mouse->position.x), static_cast<float>(mouse->position.y)};
                p.velocity = {0.f, 0.f};
                simulator.addParticle(p);
            }
        }
        // Calculs et mapping
        simulator.update(dt);
            // Rebonds sur les bords
        for(auto& p : simulator.getParticles()) {
            if(p.position.x - RADIUS < 0.f || p.position.x + RADIUS > WIDTH) p.velocity.x *= -1.f;
            if(p.position.y - RADIUS < 0.f || p.position.y + RADIUS > HEIGHT) p.velocity.y *= -1.f;
        }
        // Raffraichissement - dessin - affichage
        window.clear(sf::Color::Black);
        for(const auto& p : simulator.getParticles()) {
            shape.setPosition(p.position);
            window.draw(shape);
        }
        window.display();
    }
    
    return 0;
}

/* Clarifications conceptuelles
Jour 2
deltaTime : Représente le temps écoulé entre la frame actuelle et la dernière, fondamentale dans toute simulation. On l'utilisera pour la controler la position des pixels : position += vitesse*deltaTime;
Acceleration != vitesse : a modifie v et v modifie p (toujours avec *dt)

*/