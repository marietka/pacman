#include <SFML\Graphics.hpp>
#include <Windows.h>
#include <string>
#include "Management.h"

using namespace std;
using namespace sf;

class Game /// odpowiada za działanie gry
{
public:
	Game(void);///konstruktor
	~Game(void);/// destruktor

	void runGame(); /// uruchamia grę

protected:
	enum GameState {MENU,GAME,END};///lista wyliczeniowa statusu gry
	GameState state;

private:
	Font font; ///przechowuje czcionkę
	void menu();
	void play();
};

