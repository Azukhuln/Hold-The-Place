#pragma once

#include <SFML/Graphics.hpp>

class Enemy : public sf::RectangleShape
{
public:
	Enemy(const sf::Vector2f& size, const sf::Vector2f& pos) : sf::RectangleShape(size)
	{
		health = 0;
		speed = 0.0;
		damage = 0;
		spawnrate = 0.0;
		loot = 0;
		this->setPosition(pos);
	}

	~Enemy() {
		// I dunno what to put in here.
	}

	void hurt(int amount) {
		health -= amount;
		if (health <= 0) {
			//call thingy that destroyes it. 
		}
	}

	void crawlup(int slow) {
		double sped;
		if (slow == 1) {
			sped = speed / 2;
		}
		else {
			sped = speed;
		}
		move(0, sped);
	}
	void crawldown(int slow) {
		double sped;
		if (slow == 1) {
			sped = speed / 2;
		}
		else {
			sped = speed;
		}
		move(0, -sped);
	}
	void crawlright(int slow) {
		double sped;
		if (slow == 1) {
			sped = speed / 2;
		}
		else {
			sped = speed;
		}
		move(sped, 0);
	}
	void crawlleft(int slow) {
		double sped;
		if (slow == 1) {
			sped = speed / 2;
		}
		else {
			sped = speed;
		}
		move(-sped, 0);
	}

private:
	int health;
	double speed;
	int damage;
	double spawnrate;
	int loot;
};

