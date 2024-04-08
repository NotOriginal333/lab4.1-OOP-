#include "Ellipse.h"

double Ellipse::area() const {
	return M_PI * getA() * semi_minor_axis;
}

double Ellipse::perimeter() const {
	return 2 * M_PI * sqrt((getA() * getA() + semi_minor_axis * semi_minor_axis) / 2);
}