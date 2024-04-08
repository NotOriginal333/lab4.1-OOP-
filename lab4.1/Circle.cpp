#include "Circle.h"

double Circle::area() const {
	return M_PI * getA() * getA();
}

double Circle::perimeter() const {
	return 2 * M_PI * getA();
}