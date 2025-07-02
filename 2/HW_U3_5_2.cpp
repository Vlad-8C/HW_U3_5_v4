#include <iostream>
#include <vector>
#include <map>

#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

const void getDataFigure(std::string str, std::map<std::string, double> Data) 

{
	if (Data["QSide"]==3) std::cout<< '\n' << str << std::endl << "Sides: " << "a = " << Data["a"] << " b = " << Data["b"] << " c = " << Data["c"] << \
		"\nAngle: " << "A = " << Data["A"] << " B = " << Data["B"] << " C = " << Data["C"] << std::endl;
	
	if (Data["QSide"] == 4) std::cout << '\n' << str << std::endl << "Sides: " << "a = " << Data["a"] << " b = " << Data["b"] << " c = " << Data["c"] << " d = " << Data["d"] << \
		"\nAngle: " << "A = " << Data["A"] << " B = " << Data["B"] << " C = " << Data["C"] << " D = " << Data["D"] << std::endl;
}


class right_triangle : public triangle
{
private:
	std::string type = "Right triangle:";
public:
	right_triangle(double a_, double b_, double c_, double an_a, double an_b) :triangle{ a_, b_, c_, an_a, an_b, 90 } {};
	std::string DataType() override
	{
		return type;
	}
};

class isosceles_triangle : public triangle
{
private:
	std::string type = "Isosceles triangle:";
public:
	isosceles_triangle(double a_, double c_, double an_a, double an_b, double an_c) :triangle{ a_, a_, c_, an_a, an_b, an_c } {};
	std::string DataType() override
	{
		return type;
	}
};

class equilateral_triangle : public triangle
{
private:
	std::string type = "Equilateral triangle: ";
public:
	equilateral_triangle(double a_) :triangle{ a_, a_, a_, 60, 60, 60 } {};
	std::string DataType() override
	{
		return type;
	}
};




//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

class rectangle :public quadrangle
{
private:
	std::string type = "Rectangle: ";
public:
	rectangle(double a_, double b_) :quadrangle{ a_, b_, a_, b_, 90, 90, 90, 90 } {};
	std::string DataType() override
	{
		return type;
	}
};

class square :public quadrangle
{
private:
	std::string type = "Square: ";
public:
	square(double a_) :quadrangle{ a_, a_, a_, a_, 90, 90, 90, 90 } {};
	std::string DataType() override
	{
		return type;
	}
};

class parallelogramme :public quadrangle
{
private:
	std::string type = "Parallelogramme: ";
public:
	parallelogramme(double a_, double b_, double an_a, double an_b) :quadrangle{ a_, b_, a_, b_, an_a, an_b, an_a, an_b } {};
	std::string DataType() override
	{
		return type;
	}
};

class rhombus :public quadrangle
{
private:
	std::string type = "Rhombus: ";
public:
	rhombus(double a_, double an_a, double an_b) :quadrangle{ a_, a_, a_, a_, an_a, an_b, an_a, an_b } {};
	std::string DataType() override
	{
		return type;
	}
};


class any :public Figure
{
private:
	std::string type = "Any: ";
public:
	any() : Figure{ 0 } {};
	//void getData() { std::cout << type << ": "; getDataFigure(this); }
};

int main()
{
	triangle t1{10, 20, 30, 60, 70, 110};
	right_triangle t_r1{ 10, 20, 30, 45, 45 };
	isosceles_triangle t_i1{ 10, 20, 60, 50, 70 };
	equilateral_triangle t_e1{ 10 };

	quadrangle q1{10, 20, 30, 40, 50, 60, 70, 80};
	rectangle q_r{ 10, 20 };
	square q_s{ 20 };
	parallelogramme q_p{ 10, 20, 45, 95 };
	rhombus q_rh{ 10, 80, 100 };

	any a1;
	std::string buf{};
	std::map<std::string, double> Buf{};
	//+++++++++++++++++++++++/_\+++++++++++++++++++++//
	Buf=t1.getData();
	buf = t1.DataType();
	getDataFigure(buf, Buf);
	
	Buf = t_r1.getData();
	buf = t_r1.DataType();
	getDataFigure(buf, Buf);
	Buf = t_i1.getData();
	buf = t_i1.DataType();
	getDataFigure(buf, Buf);
	Buf = t_e1.getData();
	buf = t_e1.DataType();
	getDataFigure(buf, Buf);

	//+++++++++++++++++++++++|_|+++++++++++++++++++++//
//	q1.getDataTypeQuadrangle();
	Buf = q1.getData();
	buf = q1.DataType();
	getDataFigure(buf, Buf);

	Buf = q_r.getData();
	buf = q_r.DataType();
	getDataFigure(buf, Buf);
	Buf = q_s.getData();
	buf = q_s.DataType();
	getDataFigure(buf, Buf);
	Buf = q_p.getData();
	buf = q_p.DataType();
	getDataFigure(buf, Buf);
	Buf = q_rh.getData();
	buf = q_rh.DataType();
	getDataFigure(buf, Buf);


	return EXIT_SUCCESS;
}