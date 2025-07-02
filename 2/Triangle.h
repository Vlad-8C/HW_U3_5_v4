#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle :public Figure
{
protected:
	double a{}, b{}, c{};
	double angle_a{}, angle_b{}, angle_c{};
	std::string type = "Triangle:";
public:
	triangle(double a_, double b_, double c_, double an_a, double an_b, double an_c) :Figure{ 3 }, a{ a_ }, b{ b_ }, c{ c_ }, \
		angle_a{ an_a }, angle_b{ an_b }, angle_c{ an_c }{};
	void getDataTypeTriangle() { std::cout << '\n' << type << std::endl; getDataTriangle(*this); }
	
	std::map<std::string, double> getData()
	{
		std::map<std::string, double> Data{};
		Data["QSide"] = sides;
		Data["a"] = a;
		Data["b"] = b;
		Data["c"] = c;
		Data["A"] = angle_a;
		Data["B"] = angle_b;
		Data["C"] = angle_c;
		return Data;
	}
	virtual std::string DataType()
	{
		return type;
	}

	void getDataTriangle(const triangle& obj)
	{
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << "\nAngle: " << "A= " << angle_a << " B=" << angle_b << " C=" << angle_c << std::endl;
	}
};

#endif
