#include "Rectangle.h"

double Rectangle::area() const {
	return getA() * height;
}

double Rectangle::perimeter() const {
	return 2 * (getA() + height);
}