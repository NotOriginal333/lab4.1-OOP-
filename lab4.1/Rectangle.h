#pragma once
#include "Figure.h"


class Rectangle : public Figure
{
private:
	    double height;
	
	public:
		Rectangle(double w, double h) : height(h) { setA(w); };
	
		double area() const override;
	
		double perimeter() const override;
};

