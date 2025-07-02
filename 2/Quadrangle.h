#ifndef QUADRANGLE_H
#define QUADRANGLE_H


class quadrangle :public Figure
{
protected:
	double a{}, b{}, c{}, d{};
	double angle_a{}, angle_b{}, angle_c{}, angle_d{};
	std::string type = "Quadrangle: ";
public:
	quadrangle(double a_, double b_, double c_, double d_, double an_a, double an_b, double an_c, double an_d) :Figure{ 4 }, a{ a_ }, b{ b_ }, c{ c_ }, d{ d_ }, \
		angle_a{ an_a }, angle_b{ an_b }, angle_c{ an_c }, angle_d{ an_d }{};
	void getDataTypeQuadrangle() { std::cout << '\n' << type << std::endl; getDataQuadrangle(*this); }
	virtual std::map<std::string, double> getData()
	{
		std::map<std::string, double> Data{};
		Data["QSide"] = sides;
		Data["a"] = a;
		Data["b"] = b;
		Data["c"] = c;
		Data["d"] = d;
		Data["A"] = angle_a;
		Data["B"] = angle_b;
		Data["C"] = angle_c;
		Data["D"] = angle_d;
		return Data;
	}
	virtual std::string DataType()
	{
		return type;
	}
	void getDataQuadrangle(quadrangle& obj)
	{
		std::cout << "Sides: " << "a= " << a << " b=" << b << " c=" << c << " d=" << d << \
			"\nAngle: " << "A= " << angle_a << " B=" << angle_b << " C=" << angle_c << " D=" << angle_d << std::endl;
	}
};

#endif