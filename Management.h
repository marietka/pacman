#pragma once /// Zapobiega ona ponownemu załączeniu treści całego pliku, w którym została użyta

#include "Monster.h"
#include "Pacman.h"

class  Management  /// Management zarządza naszą grą, obiektami i kolizjami
    {
        public:
            Management(sf::RenderWindow &win);
            ~Management(void);
            void runManagement(sf::RenderWindow &window);

        private:
            Pacman pacman;
            Monster monster;

        protected:
            enum GameState {MENU,GAME,END};
            GameState state;
    };
