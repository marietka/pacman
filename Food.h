#include <SFML/Graphics.hpp>

using namespace sf;

class Food: public sf::RectangleShape /// klasa Food dziedziczy po RectangleShape, która implementuje tworzenie prostokątów
{
    public:
        Food();
        Food(float x, float y); /// x i y to pozycja prostokata na ekranie
        ~Food();
        FloatRect globalbounds();/// funkcja do okreslania granic prostokata
};
