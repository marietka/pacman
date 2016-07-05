#if !defined(_MONSTER_H)
#define _MONSTER_H
#include <SFML\Graphics.hpp>

class Monster: public sf::Drawable,
	sf::Transformable ///przechowanie informacji o potworze
	{
        public:
            Monster(void);
            ~Monster(void);
            void update();
            int place;
            int x; /// poczatkowa pozycja potwora
            int y; /// poczatkowa pozycja potwora
            sf::FloatRect globalbounds(); /// funkcja do okreœlania granic prostok¹ta
            sf::FloatRect getBoundingBox();

        private:
            sf::Sprite sprite1;
            sf::Texture texture1;
            sf::Vector2f speed1; /// Vector2f służy do manidwuwymiarowy wektor
            float speed;
            virtual void draw(sf::RenderTarget &target,sf::RenderStates states) const;
            /**przydomek virtual - określamy nim, żeby kompilator nie sięgał po funkcję z klasy bazowej,
            *ale sam się zorientował na co wskaźnik pokazuje.
            */


};

#endif
