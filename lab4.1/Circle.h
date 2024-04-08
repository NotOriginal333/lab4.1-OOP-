#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	
	public:
		Circle(double r) { setA(r); };
	
		double area() const override;
	
		double perimeter() const override;
};

