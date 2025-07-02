#include <iostream>
#include "Figure.h"
#include "Triangle.h"

triangle::triangle(double a_, double b_, double c_, double an_a, double an_b, double an_c, std::string type_ = "triangle") : Figure{3}, a{a_}, b{b_}, c{c_}, \
angle_a{ an_a }, angle_b{ an_b }, angle_c{ an_c }, type{type_} {};

bool triangle::Check()
{
	if ((angle_a + angle_b + angle_c) == 180 && sides==3) return true;
	else return false;
}

void triangle::getDataFigure()
{
	std::cout << "Name figure: " << type << "\nQuantity sides: " << sides << "\nSides: a= " << a << " b= " << b << " c= " << c << \
		"\nAngls: A= " << angle_a << " B= " << angle_b << " C= " << angle_c << "\nCheck parametrs: " << ( Check() ? "right" : "wrong" ) << std::endl << "--------------------------------" << std::endl;
}