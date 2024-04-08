#pragma once
#include <math.h>
#include <corecrt_math_defines.h>


class Figure
{
	double a;
public:
	double getA() const { return a; };
	void setA(double a);
		
	virtual double area() const = 0;
	   
	virtual double perimeter() const = 0;
	  
    virtual ~Figure() {}
};

