#include <SFML/Graphics.hpp>
#include <iostream>

enum Direction {
	right = 2, left = -2, up = 1, down = -1, none = 0
};

class Tile {
public:
	Tile() {
		this->dir = none;
	}

	void setRectangle(double x, double y) {
		this->rect.setSize(sf::Vector2f(x, y));
	}

	void setSpot(double x, double y) {
		this->rect.setPosition(x, y);
	}

	void setDirection(Direction newDirection) {
		this->dir = newDirection;
	}
private:
	sf::RectangleShape rect;
	sf::Texture image;
	Direction dir;
};
