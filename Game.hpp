#pragma once

#include <SFML/Graphics.hpp>

#include "Enemy.hpp"
#include "Map.hpp"



class Game
{
public:
	//constructor needs a window to run game in
	Game(sf::Window &window);

	~Game();

	//runs the game once game is constructed
	void runGame(sf::Window &window);

	//load in map?
	void loadMap();

	//update game state every time increment; happens in runGame()
	void updateGame();

	//update unit when time passes; called in updateGame
	void updateUnit();

	//draws new screen for the game with new changes
	void drawGame();

	//add a unit to the game
	void addUnit();

private:
	std::vector<Unit> listUnits;
};
