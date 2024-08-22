#include <iostream>
#include "Guns.hpp"
#include "Shooter.hpp"
#include "Square.hpp"


int main() {
	setlocale(LC_ALL, "russian");

	//Виртуальное наследование
	
	//Gun gun; //Ощибка, т.к. класс абстракный
	//gun.shoot();

	Pistol pistol;
	//pistol.shoot();

	MachineGun mg;
	//mg.shoot();

	Shooter s1("fame");
	Shooter s2("jame");
	s1.takeGun(pistol);
	s2.takeGun(mg);
	s1.shoot(s2);
	s2.shoot(s1);

	Square sq(5);
	std::cout << "Периметр квадрата = " << sq.perimetr() << std::endl;
	std::cout << "Площадь квадрата = " << sq.area() << std::endl;

	return 0;
}