#pragma once
#include <SFML\Graphics.hpp>

class Pacman: public sf::Drawable,
	sf::Transformable /// przechowuje informacje o graczu
    {
        public:
            Pacman(void);
            ~Pacman(void);
            sf::FloatRect getBoundingBox();
            void update();

        private:
            sf::Sprite sprite;
            sf::Texture texture;
            float speed;
            virtual void draw(sf::RenderTarget &target,sf::RenderStates states) const;
};
