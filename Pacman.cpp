#include "Pacman.h"
#include <Windows.h>
#include <math.h>
#include <iostream>

#define M_PI 3.14159265358979323846

using namespace sf;

Pacman::Pacman(void)
{
	if(!texture.loadFromFile("Pacman.png"))///wczytanie tekstury
	{
		MessageBox(NULL,"Textures not found!","ERROR",NULL);
		return;
	}
    sprite.setTexture(texture); /// przypisanie tektury do sprite'a
	sprite.setOrigin(32,32); /// punkt, wzgledem którego Pacman jest obracany
	speed = 1.5; /// wartosci predkosci Pacmana
	sprite.setPosition(100,100);///ustawianie pozycji
}

Pacman::~Pacman(void)
{
}

void Pacman::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	states.transform *= getTransform();

	target.draw(sprite);
}

void Pacman::update()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        sprite.setRotation(0);
        float rotacja = 0;
        float vx = sin(( rotacja * M_PI ) / 180.0f );
        float vy = -cos(( rotacja * M_PI ) / 180.0f );
        sprite.move (speed*vx,speed*vy);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        sprite.setRotation(180);
        float rotacja = 180;
        float vx = sin(( rotacja * M_PI ) / 180.0f );
        float vy = -cos(( rotacja * M_PI ) / 180.0f );
        sprite.move (speed*vx,speed*vy);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        sprite.setRotation(90);
        float rotacja = 90;
        float vx = sin(( rotacja * M_PI ) / 180.0f );
        float vy = -cos(( rotacja * M_PI ) / 180.0f );
        sprite.move (speed*vx,speed*vy);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        sprite.setRotation(270);
        float rotacja = 270;
        float vx = sin(( rotacja * M_PI ) / 180.0f );
        float vy = -cos(( rotacja * M_PI ) / 180.0f );
        sprite.move (speed*vx,speed*vy);
    }
}

sf::FloatRect Pacman::getBoundingBox()
{
	sf::FloatRect f(sprite.getGlobalBounds());///pobranie granic Pacmana dla celów kolizji
	return f;
}
