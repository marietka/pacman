#include <iostream>
#include "Monster.h"
#include <Windows.h>
#include <math.h>
#include <ctime>

using namespace std;

#define M_PI 3.14159265358979323846

Monster::Monster(void) {
    if(!texture1.loadFromFile("monster.png"))///ladowanie potwora
	{
		MessageBox(NULL,"Textures not found!","ERROR",NULL);
		return;
	}
	sprite1.setTexture(texture1);
	sprite1.setOrigin(32,32);///ustawienie punktu, wobec którego potwór bedzie sie poruszac na orodku ekranu
	speed = 0.5; /// ustawienie predkosci potwora
	sprite1.setPosition(1280/2,720/2);
}

Monster::~Monster(void)
{
}

void Monster::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	states.transform *= getTransform();///zwraca transformacje zawierajacej np. pozycje, rotacje

	target.draw(sprite1);
}

void Monster::update()///aktualizacja obiektu klasy Monster, w praktyce jego ruch
{
    srand(time(NULL));///sprawia,z¿e otrzymujemy rózne wartosci pseudolosowe
    Monster monster;
    monster.x = 1280/2; /// srodek ekranu
    monster.y = 720/2; /// srodek ekranu
    monster.place = rand() % 3000; /// ustawiamy losowe miejsce, gdzie ma sie pojawic pacman na okręgu
    monster.speed = 400;
    sprite1.setPosition(monster.x, monster.y); /// ustawienie pozycji dla potwora

    ///algorytm ustalajacy miejsce, w którym pojawia sie pacman
    monster.x = monster.x + cos (monster.place) * monster.speed;
    monster.y = monster.y + sin (monster.place) * monster.speed;
    sprite1.setPosition(monster.x, monster.y); // ustawienie potwora w nowym, wylosowanym miejscu
}

sf::FloatRect Monster::getBoundingBox()
{
	sf::FloatRect f(sprite1.getGlobalBounds()); /// zwraca globalne granice jedzenia w ksztalcie prostokata
	return f;
}


