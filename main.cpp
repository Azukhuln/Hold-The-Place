#include "Map.hpp"

int main() {
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "MapTileable");
	// Test object to move across the screen.
	sf::RectangleShape entity(sf::Vector2f(50, 50));
	entity.setPosition(0, 700);
	entity.setFillColor(sf::Color::Black);
	// Full map with the path tiles.
	Map m;
	sf::Texture background;
	background.loadFromFile("Map_Background.png");
	sf::Sprite s(background);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			window.clear();
			window.draw(s);
			window.draw(entity);
			window.display();
		}
	}

	return 0;
}
