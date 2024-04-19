#include "Game.hpp"


/*
Game needs to load map, set starting variables, and run game
*/
Game::Game(sf::Window &window)
{
	//load map here?
	loadMap();
}

//runs game functions
void Game::runGame(sf::Window &window)
{
	//put all the stuff that does time here

	//each "time": 
	updateGame();
	drawGame();
}

void Game::loadMap()
{
	//no idea champ
}


void Game::updateGame()
{
	updateUnit();
}



void Game::updateUnit()
{
	//use vector of units to update each unit
	Unit* checkUnit = listUnits.begin(); //start loop location
	while (checkUnit != listUnits.end()) //goes through entire vector
	{
		bool deleted = false; //check to prevent iterating if we deleted instead
		
		if (checkUnit != nullptr) //validates data present
		{
			checkUnit->update(); //class function of unit to update; does everything we want to happen to unit (move, isAlive check, etc)

			if ((*checkUnit)->isAlive() == false) //unit died; delete it
			{
				checkUnit = listUnits.erase(checkUnit); //moves to next unit after erasing current
				deleted = true;
			}
		}
		if (deleted == false)
		{
			checkUnit++;
		}
	}
}
