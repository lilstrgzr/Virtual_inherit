#pragma once
#include "Figure.hpp"

class Square : public Figure{
private:
	int sides;
	double side;
public:
	Square() :  sides(4), side(0.) {}
	Square(int side) : sides(4) {
		this->side = side < 0. ? 0. : side;
	}
	double perimetr() override {
		return side * sides;
	}
	double area() override {
		return side * side;
	}
};

