#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
	size_t sides{};
public:
	Figure () = default;
	Figure (size_t s);
	virtual bool Check()=0;
	virtual void getDataFigure() { std::cout << "Quantity sides: " << ": " << sides << std::endl; }
};

#endif