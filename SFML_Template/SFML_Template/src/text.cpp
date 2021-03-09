#include "text.h"
#include <iostream>

text::text()
{
	neuro.loadFromFile(".\\assets\\font\\neuropol.ttf");


	life.setFont(neuro);
	life.setString("Lives:");
	life.setCharacterSize(15);
	life.setPosition(10, 5);
	life.setFillColor(sf::Color::White);

	bg.loadFromFile(".\\assets\\graphics\\bg.png");
	Sbg.setTexture(bg);
	Sbg.setScale(0.83, 0.83);
};


/*int text::load()
{
	sf::Font neuro;
	if (!neuro.loadFromFile(".\\assets\\font\\neuropol.ttf")) return 0;
}*/