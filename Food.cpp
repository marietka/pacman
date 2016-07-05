#include <SFML/Graphics.hpp>
#include "Food.h"

using namespace sf;

Food::Food(float x, float y)
{
    this->setPosition(Vector2f(x,y)); ///ustawienie pozycji kwadratu na ekranie
    this->setSize(Vector2f(50,50));/// usawienie wielko�ci kwadratu
    this->setFillColor(Color::White);/// ustawienie koloru kwaratu na bia�y
}

Food::~Food(){ /// destruktor
}

FloatRect Food::globalbounds()
{
    return this->getGlobalBounds(); /// zwraca globalne granice jedzenia w ksztalcie prostokata
}



