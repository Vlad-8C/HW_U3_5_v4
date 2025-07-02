#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
public:
	size_t sides{};
public:
	Figure() = default;
	Figure(size_t s) :sides{ s } {};
	
};

#endif