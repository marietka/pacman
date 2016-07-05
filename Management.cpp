#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <string>
#include <iostream>
#include "Management.h"
#include "Food.h"
#include "Monster.h"
#include "Game.h"

using namespace sf;

Management::Management(sf::RenderWindow &win)///ustawienie wskaznika na okno
{
    runManagement(win);
}

Management::~Management(void)
{
}

void Management::runManagement(sf::RenderWindow &window)
/**odpowiada za utworzenie obiektów klasy Food w odpowiednich miejscach, przechwytuje
*wcisniecia klawiszy, odpowiada za kolizje
*/
{
	bool menu = false;
    Food food0(10,10);
	Food food1(100,10);
	Food food2(200,10);
	Food food3(300,10);
	Food food4(400,10);
	Food food5(500,10);
	Food food6(600,10);
	Food food7(700,10);
	Food food8(800,10);
	Food food9(900,10);
	Food food10(1000,10);
	Food food11(1100,10);
	Food food12(1200,10);

    Food food13(10,100);
	Food food14(100,100);
	Food food15(200,100);
	Food food16(300,100);
	Food food17(400,100);
	Food food18(500,100);
	Food food19(600,100);
	Food food20(700,100);
	Food food21(800,100);
	Food food22(900,100);
	Food food23(1000,100);
	Food food24(1100,100);
	Food food25(1200,100);

    Food food26(10,200);
	Food food27(100,200);
	Food food28(200,200);
	Food food29(300,200);
	Food food30(400,200);
	Food food31(500,200);
	Food food32(600,200);
	Food food33(700,200);
	Food food34(800,200);
	Food food35(900,200);
	Food food36(1000,200);
	Food food37(1100,200);
	Food food38(1200,200);

    Food food39(10,300);
	Food food40(100,300);
	Food food41(200,300);
	Food food42(300,300);
	Food food43(400,300);
	Food food44(500,300);
	Food food45(600,300);
	Food food46(700,300);
	Food food47(800,300);
	Food food48(900,300);
	Food food49(1000,300);
	Food food50(1100,300);
	Food food51(1200,300);

    Food food52(10,400);
	Food food53(100,400);
	Food food54(200,400);
	Food food55(300,400);
	Food food56(400,400);
	Food food57(500,400);
	Food food58(600,400);
	Food food59(700,400);
	Food food60(800,400);
	Food food61(900,400);
	Food food62(1000,400);
	Food food63(1100,400);
	Food food64(1200,400);

    Food food65(10,500);
	Food food66(100,500);
	Food food67(200,500);
	Food food68(300,500);
	Food food69(400,500);
	Food food70(500,500);
	Food food71(600,500);
	Food food72(700,500);
	Food food73(800,500);
	Food food74(900,500);
	Food food75(1000,500);
	Food food76(1100,500);
	Food food77(1200,500);

	Food food78(10,600);
	Food food79(100,600);
	Food food80(200,600);
	Food food81(300,600);
	Food food82(400,600);
	Food food83(500,600);
	Food food84(600,600);
	Food food85(700,600);
	Food food86(800,600);
	Food food87(900,600);
	Food food88(1000,600);
	Food food89(1100,600);
	Food food90(1200,600);

	while(!menu)
	{
		Event event;
        ///ustawienie możliwości wylaczenia programu przez nacisniecie Esc na klawiaturze
		while(window.pollEvent(event))
		{
			if(event.type == Event::KeyReleased && event.key.code == Keyboard::Escape)
				menu = true;
		}

		FloatRect granice(pacman.getBoundingBox()); /// okreslenie granic Pacmana, potrzebne do kolizji

        /// detekcja kolizji między Pacmanem a obiektem monster
		if(granice.intersects(monster.getBoundingBox()))
        {
                   /// ekran odpowiedzialny za informację o przegranej
                    sf::Texture tekstura3;
                    tekstura3.loadFromFile( "przegrana.png" );
                    sf::Sprite obrazek3;
                    obrazek3.setTexture(tekstura3);
                    window.clear();
                    window.draw(obrazek3);
                    window.display();
                    sleep(seconds(3));
                    menu=true;
        }

        /// detekcja kolizji Pacmana z obiektami klasy Food

            if(granice.intersects(food0.globalbounds()))
        {
            food0.setFillColor(Color::Transparent); /// ustawienie koloru obiektu klasy Food na Transparent w razie kolizji (znikanie obiektu)
        }

            if(granice.intersects(food1.globalbounds()))
        {
            food1.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food2.globalbounds()))
        {
            food2.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food3.globalbounds()))
        {
            food3.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food4.globalbounds()))
        {
            food4.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food5.globalbounds()))
        {
            food5.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food6.globalbounds()))
        {
            food6.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food7.globalbounds()))
        {
            food7.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food8.globalbounds()))
        {
            food8.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food9.globalbounds()))
        {
            food9.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food10.globalbounds()))
        {
            food10.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food11.globalbounds()))
        {
            food11.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food12.globalbounds()))
        {
            food12.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food13.globalbounds()))
        {
            food13.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food14.globalbounds()))
        {
            food14.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food15.globalbounds()))
        {
            food15.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food16.globalbounds()))
        {
            food16.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food17.globalbounds()))
        {
            food17.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food18.globalbounds()))
        {
            food18.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food19.globalbounds()))
        {
            food19.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food20.globalbounds()))
        {
            food20.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food21.globalbounds()))
        {
            food21.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food22.globalbounds()))
        {
            food22.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food23.globalbounds()))
        {
            food23.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food24.globalbounds()))
        {
            food24.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food25.globalbounds()))
        {
            food25.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food26.globalbounds()))
        {
            food26.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food27.globalbounds()))
        {
            food27.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food28.globalbounds()))
        {
            food28.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food29.globalbounds()))
        {
            food29.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food30.globalbounds()))
        {
            food30.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food31.globalbounds()))
        {
            food31.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food32.globalbounds()))
        {
            food32.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food33.globalbounds()))
        {
            food33.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food34.globalbounds()))
        {
            food34.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food35.globalbounds()))
        {
            food35.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food36.globalbounds()))
        {
            food36.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food37.globalbounds()))
        {
            food37.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food38.globalbounds()))
        {
            food38.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food39.globalbounds()))
        {
            food39.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food40.globalbounds()))
        {
            food40.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food41.globalbounds()))
        {
            food41.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food42.globalbounds()))
        {
            food42.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food43.globalbounds()))
        {
            food43.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food44.globalbounds()))
        {
            food44.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food45.globalbounds()))
        {
            food45.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food46.globalbounds()))
        {
            food46.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food47.globalbounds()))
        {
            food47.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food48.globalbounds()))
        {
            food48.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food49.globalbounds()))
        {
            food49.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food50.globalbounds()))
        {
            food50.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food51.globalbounds()))
        {
            food51.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food52.globalbounds()))
        {
            food52.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food53.globalbounds()))
        {
            food53.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food54.globalbounds()))
        {
            food54.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food55.globalbounds()))
        {
            food55.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food56.globalbounds()))
        {
            food56.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food57.globalbounds()))
        {
            food57.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food58.globalbounds()))
        {
            food58.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food59.globalbounds()))
        {
            food59.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food60.globalbounds()))
        {
            food60.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food61.globalbounds()))
        {
            food61.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food62.globalbounds()))
        {
            food62.setFillColor(Color::Transparent);
        }
            if(granice.intersects(food63.globalbounds()))
        {
            food63.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food64.globalbounds()))
        {
            food64.setFillColor(Color::Transparent);
        }

            if(granice.intersects(food65.globalbounds()))
        {
            food65.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food66.globalbounds()))
        {
            food66.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food67.globalbounds()))
        {
            food67.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food68.globalbounds()))
        {
            food68.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food69.globalbounds()))
        {
            food69.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food70.globalbounds()))
        {
            food70.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food71.globalbounds()))
        {
            food71.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food72.globalbounds()))
        {
            food72.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food73.globalbounds()))
        {
            food73.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food74.globalbounds()))
        {
            food74.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food75.globalbounds()))
        {
            food75.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food76.globalbounds()))
        {
            food76.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food77.globalbounds()))
        {
            food77.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food78.globalbounds()))
        {
            food78.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food79.globalbounds()))
        {
            food79.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food80.globalbounds()))
        {
            food80.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food81.globalbounds()))
        {
            food81.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food82.globalbounds()))
        {
            food82.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food83.globalbounds()))
        {
            food83.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food84.globalbounds()))
        {
            food84.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food85.globalbounds()))
        {
            food85.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food86.globalbounds()))
        {
            food86.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food87.globalbounds()))
        {
            food87.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food88.globalbounds()))
        {
            food88.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food89.globalbounds()))
        {
            food89.setFillColor(Color::Transparent);
        }

             if(granice.intersects(food90.globalbounds()))
        {
            food90.setFillColor(Color::Transparent);
        }
            /// warunek na wygraną - wszystkie obiekty klasy Food muszą mieć kolor Transparent
            if ((food1.getFillColor()==Color::Transparent)&&(food2.getFillColor()==Color::Transparent)&&
                (food3.getFillColor()==Color::Transparent)&&(food4.getFillColor()==Color::Transparent)&&
                (food5.getFillColor()==Color::Transparent)&&(food6.getFillColor()==Color::Transparent)&&
                (food7.getFillColor()==Color::Transparent)&&(food8.getFillColor()==Color::Transparent)&&
                (food9.getFillColor()==Color::Transparent)&&(food10.getFillColor()==Color::Transparent)&&
                (food11.getFillColor()==Color::Transparent)&&(food12.getFillColor()==Color::Transparent)&&
                (food13.getFillColor()==Color::Transparent)&&(food14.getFillColor()==Color::Transparent)&&
                (food15.getFillColor()==Color::Transparent)&&(food16.getFillColor()==Color::Transparent)&&
                (food17.getFillColor()==Color::Transparent)&&(food18.getFillColor()==Color::Transparent)&&
                (food19.getFillColor()==Color::Transparent)&&(food20.getFillColor()==Color::Transparent)&&
                (food21.getFillColor()==Color::Transparent)&&(food22.getFillColor()==Color::Transparent)&&
                (food23.getFillColor()==Color::Transparent)&&(food24.getFillColor()==Color::Transparent)&&
                (food25.getFillColor()==Color::Transparent)&&(food26.getFillColor()==Color::Transparent)&&
                (food27.getFillColor()==Color::Transparent)&&(food28.getFillColor()==Color::Transparent)&&
                (food29.getFillColor()==Color::Transparent)&&(food30.getFillColor()==Color::Transparent)&&
                (food31.getFillColor()==Color::Transparent)&&(food32.getFillColor()==Color::Transparent)&&
                (food33.getFillColor()==Color::Transparent)&&(food34.getFillColor()==Color::Transparent)&&
                (food35.getFillColor()==Color::Transparent)&&(food36.getFillColor()==Color::Transparent)&&
                (food37.getFillColor()==Color::Transparent)&&(food38.getFillColor()==Color::Transparent)&&
                (food39.getFillColor()==Color::Transparent)&&(food40.getFillColor()==Color::Transparent)&&
                (food41.getFillColor()==Color::Transparent)&&(food42.getFillColor()==Color::Transparent)&&
                (food43.getFillColor()==Color::Transparent)&&(food44.getFillColor()==Color::Transparent)&&
                (food45.getFillColor()==Color::Transparent)&&(food46.getFillColor()==Color::Transparent)&&
                (food47.getFillColor()==Color::Transparent)&&(food48.getFillColor()==Color::Transparent)&&
                (food49.getFillColor()==Color::Transparent)&&(food50.getFillColor()==Color::Transparent)&&
                (food51.getFillColor()==Color::Transparent)&&(food52.getFillColor()==Color::Transparent)&&
                (food53.getFillColor()==Color::Transparent)&&(food54.getFillColor()==Color::Transparent)&&
                (food55.getFillColor()==Color::Transparent)&&(food56.getFillColor()==Color::Transparent)&&
                (food57.getFillColor()==Color::Transparent)&&(food58.getFillColor()==Color::Transparent)&&
                (food59.getFillColor()==Color::Transparent)&&(food60.getFillColor()==Color::Transparent)&&
                (food61.getFillColor()==Color::Transparent)&&(food62.getFillColor()==Color::Transparent)&&
                (food63.getFillColor()==Color::Transparent)&&(food64.getFillColor()==Color::Transparent)&&
                (food65.getFillColor()==Color::Transparent)&&(food66.getFillColor()==Color::Transparent)&&
                (food67.getFillColor()==Color::Transparent)&&(food68.getFillColor()==Color::Transparent)&&
                (food69.getFillColor()==Color::Transparent)&&(food70.getFillColor()==Color::Transparent)&&
                (food71.getFillColor()==Color::Transparent)&&(food72.getFillColor()==Color::Transparent)&&
                (food73.getFillColor()==Color::Transparent)&&(food74.getFillColor()==Color::Transparent)&&
                (food75.getFillColor()==Color::Transparent)&&(food76.getFillColor()==Color::Transparent)&&
                (food77.getFillColor()==Color::Transparent)&&(food78.getFillColor()==Color::Transparent)&&
                (food79.getFillColor()==Color::Transparent)&&(food80.getFillColor()==Color::Transparent)&&
                (food81.getFillColor()==Color::Transparent)&&(food82.getFillColor()==Color::Transparent)&&
                (food83.getFillColor()==Color::Transparent)&&(food84.getFillColor()==Color::Transparent)&&
                (food85.getFillColor()==Color::Transparent)&&(food86.getFillColor()==Color::Transparent)&&
                (food87.getFillColor()==Color::Transparent)&&(food88.getFillColor()==Color::Transparent)&&
                (food89.getFillColor()==Color::Transparent)&&(food90.getFillColor()==Color::Transparent))
                    {
                        /// ekran informujący o wygranej
                        sf::Texture tekstura2;
                        tekstura2.loadFromFile("wygrana.png");
                        sf::Sprite obrazek2;
                        obrazek2.setTexture(tekstura2);
                        window.clear();
                        window.draw(obrazek2);
                        window.display();
                        sleep(seconds(3));
                        menu=true;
                    }


		pacman.update();
		monster.update();
		window.clear();
		window.draw(pacman); /// narysowanie Pacmana
		window.draw(food0); /// narysowanie obiektu klasy Food
		window.draw(food1);
		window.draw(food2);
		window.draw(food3);
		window.draw(food4);
		window.draw(food5);
		window.draw(food6);
		window.draw(food7);
		window.draw(food8);
		window.draw(food9);
		window.draw(food10);
		window.draw(food11);
		window.draw(food12);

		window.draw(food13);
		window.draw(food14);
		window.draw(food15);
		window.draw(food16);
		window.draw(food17);
		window.draw(food18);
		window.draw(food19);
		window.draw(food20);
		window.draw(food21);
        window.draw(food22);
		window.draw(food23);
		window.draw(food24);
		window.draw(food25);

		window.draw(food26);
		window.draw(food27);
		window.draw(food28);
		window.draw(food29);
		window.draw(food30);
		window.draw(food31);
		window.draw(food32);
		window.draw(food33);
		window.draw(food34);
        window.draw(food35);
		window.draw(food36);
		window.draw(food37);
		window.draw(food38);

        window.draw(food39);
		window.draw(food40);
		window.draw(food41);
		window.draw(food42);
		window.draw(food43);
		window.draw(food44);
		window.draw(food45);
		window.draw(food46);
		window.draw(food47);
        window.draw(food48);
		window.draw(food49);
		window.draw(food50);
		window.draw(food51);

        window.draw(food52);
		window.draw(food53);
		window.draw(food54);
		window.draw(food55);
		window.draw(food56);
		window.draw(food57);
		window.draw(food58);
		window.draw(food59);
		window.draw(food60);
        window.draw(food61);
		window.draw(food62);
		window.draw(food63);
		window.draw(food64);

        window.draw(food65);
		window.draw(food66);
		window.draw(food67);
		window.draw(food68);
		window.draw(food69);
		window.draw(food70);
		window.draw(food71);
		window.draw(food72);
		window.draw(food73);
        window.draw(food74);
		window.draw(food75);
		window.draw(food76);
		window.draw(food77);

        window.draw(food78);
		window.draw(food79);
		window.draw(food80);
		window.draw(food81);
		window.draw(food82);
		window.draw(food83);
		window.draw(food84);
		window.draw(food85);
		window.draw(food86);
        window.draw(food87);
		window.draw(food88);
		window.draw(food89);
		window.draw(food90);
		window.draw(monster);

		window.display();
	}
}
