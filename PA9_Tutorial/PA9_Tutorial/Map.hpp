#include "Tile.hpp"

class Map {
public:
	Map() {
		this->map[0].setSpot(0, 700);
		this->map[0].setDirection(right);
		int i = 1;
		for (; i < 15; i++) {
			this->map[i].setSpot(i * 50, 700);
			this->map[i].setDirection(right);
		}
		this->map[14].setDirection(up);
		for (; i < 18; i++) {
			this->map[i].setSpot(700, 700 - ((i - 14) * 50));
			this->map[i].setDirection(up);
		}
		this->map[17].setDirection(left);
		for (; i < 28; i++) {
			this->map[i].setSpot(700 - ((i - 17) * 50), 550);
			this->map[i].setDirection(left);
		}
		this->map[27].setDirection(up);
		for (; i < 35; i++) {
			this->map[i].setSpot(200, 550 - ((i - 27) * 50));
			this->map[i].setDirection(up);
		}
		this->map[34].setDirection(right);
		for (; i < 41; i++) {
			this->map[i].setSpot(200 + ((i - 34) * 50), 200);
			this->map[i].setDirection(right);
		}
		this->map[40].setDirection(down);
		for (; i < 46; i++) {
			this->map[i].setSpot(500, 200 + ((i - 40) * 50));
			this->map[i].setDirection(down);
		}
		this->map[45].setDirection(right);
		for (; i < 54; i++) {
			this->map[i].setSpot(500 + ((i - 45) * 50), 450);
			this->map[i].setDirection(right);
		}
		this->map[53].setDirection(up);
		for (; i < 63; i++) {
			this->map[i].setSpot(900, 450 - ((i - 53) * 50));
			this->map[i].setDirection(up);
		}
	}

private:
	Tile map[63];
};
