#include "Game.h"

RenderWindow window(VideoMode(1280,720),"Pacman");

Game::Game(void) /// konstruktor ładuje status gry na koniec
{
	state = END;

	if(!font.loadFromFile("data/scrap.ttf"))/// ładowanie czcionki
	{
		MessageBox(NULL,"Font not found!","ERROR",NULL); /// bład w przypadku nieznalezienia czcionki
		return;
	}

	state = MENU; /// ustawienie statusu gry na MENU w razie powodzenia
}

Game::~Game(void)///destruktor
    {
    }

void Game::runGame()/// uruchomienie gry
{
	while(state != END) /// pętla, która się wykonuje dopóki nie ma końca gry
	{
		switch (state)///w zależności od użytkownika wykonuje odpowiednią funkcję
		{
		case MENU:
			menu();
			break;
		case GAME:
			play();
			break;
		}
	}
}

void Game::menu() /// uruchamia i wyświetla menu
{
	Text title("Pacman",font,200); /// nagłówek gry, czcionka i jej wielkość
	title.setColor(sf::Color(255, 211, 0, 255)); /// kolor nagłówka
	title.setPosition(1280/2-title.getGlobalBounds().width/2,20); /// pozycja nagłówka na ekranie

	const int liczba = 2; /// liczba napisów

	Text tekst[liczba];

	string str[] = {"To Play Press P","To Exit Press Esc"}; /// tablica z napisami
	for(int i=0;i<liczba;i++) /// ustawienie parametrów dla dwóch napisów
	{
		tekst[i].setFont(font); /// ustawienie czcionki
		tekst[i].setCharacterSize(50); /// ustawienie wielkości czcionki

		tekst[i].setString(str[i]);
		tekst[i].setPosition(1280/2-tekst[i].getGlobalBounds().width/2,300+i*120); /// ustawienie napisów na ekranie
	}

	while(state == MENU) /// menu się wyświetla, dopóki user chce być w menu
	{
		Event event;

		while(window.pollEvent(event))
		{
			///Wciśnięcie ESC lub przycisk X
			if(event.type == Event::Closed || event.type == Event::KeyPressed &&
				event.key.code == Keyboard::Escape)
				state = END;

			///kliknięcie MENU
			else if(event.type == Event::KeyPressed && event.key.code == Keyboard::P)
				state = GAME;
		}

		for(int i=0;i<liczba;i++)///ustawienie koloru dla tekstu
			tekst[i].setColor(Color(6, 56, 171, 255));

		window.clear(Color::White);/// ustawienie białego tła
		window.draw(title); /// wyświetlenie tytułu
		for(int i=0;i<liczba;i++) /// wyświetlenie tekstu
			window.draw(tekst[i]);

		window.display();
	}
}

void Game::play()
{
	Management management(window);///przekazanie okna do konstruktora Management

	state = MENU;///ustawienie statusu gry na MENU
}
