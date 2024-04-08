#include "Square.h"

double Square::area() const {
	return getA() * getA();
}

double Square::perimeter() const {
	return 4 * getA();
}