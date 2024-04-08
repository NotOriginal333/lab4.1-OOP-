#pragma once
#include "Figure.h"


class Ellipse : public Figure
{
private:
	    double semi_minor_axis;
	
	public:
	    Ellipse(double a, double b) : semi_minor_axis(b) { setA(a); }
	
		double area() const override;
	
		double perimeter() const override;
};

