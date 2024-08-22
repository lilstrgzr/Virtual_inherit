#pragma once

#include<iostream>

//абстрактный
class Gun {
protected:
	int damage;
public:
	virtual void shoot() = 0; //чисто виртуальный метод

	virtual int getDamage() {
		return damage;
	}
};

class Pistol : public Gun {
public:
	Pistol() {
		damage = 4;
	}

	void shoot() override {
		std::cout << "Бах!\n";
	}

	int getDamage() override {
		return damage;
	}
};

class MachineGun : public Gun {
private:
	int queue;
public:
	MachineGun() {
		damage = 3;
		queue = 5;
	}

	void shoot() override {
		for(int i = 0; i <queue; ++i)
		std::cout << "Бах! ";
		std::cout << "\b\n";
	}

	int getDamage() override {
		return damage * queue;
	}

	

};