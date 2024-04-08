#pragma once
#include "Figure.h"


class Square : public Figure
{
private:
	
	public:
		Square(double s) { setA(s); };
	
		double area() const override;
	
		double perimeter() const override;
};

