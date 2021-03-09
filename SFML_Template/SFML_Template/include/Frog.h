#pragma once
#include <SFML/Graphics.hpp>

class Frog
{
private:
	int upoffset;
	int xoffset;
	bool animate;


public:
	Frog();

	//// FUNCTIONS ////
	void MoveDown();
	void MoveUp();
	void MoveRight();
	void MoveLeft();
	void kill();
	void frames();

	//// FROG SETUP ////
	sf::Texture frogTex;
	sf::Sprite frogSprite;
	sf::IntRect sourceSprite;

	//// CLOCK ////
	sf::Clock timer;
};
