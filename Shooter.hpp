#pragma once
#include "Guns.hpp"
#include <string>

class Shooter{
private:
	int hp;
	std::string name;
	Gun* gun;
public:
	Shooter() : hp(10), gun(nullptr) {}
	Shooter(std::string name) : Shooter() {
		this->name = name;
	}

	void takeGun(Gun& gun) {
		this->gun = &gun;
	}

	void shoot(Shooter& target) {
		gun->shoot();
		target.takeDamage(gun->getDamage());
		std::cout << name << " выстрелил в " << target.name << std::endl;
		std::cout << " ХП стрелка " << target.name << ": " << target.hp << std::endl;
	}
	void takeDamage(int damage) {
		hp = damage > hp ? 0 : hp - damage;
	}

	int getHP() const { return hp; };
};

