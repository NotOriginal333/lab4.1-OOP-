#include <iostream>
#include <cmath>
#include <typeinfo> 
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Ellipse.h"

int main() {
   
    Figure* figures[4];
    
    Circle circle(5.0);
    Ellipse ellipse(4.0, 3.0);
    Square square(6.0);
    Rectangle rectangle(4.0, 7.0);

    figures[0] = &circle;
    figures[1] = &ellipse;
    figures[2] = &square;
    figures[3] = &rectangle;

    for (int i = 0; i < 4; ++i) {
        std::cout << "Figure " << i + 1 << ":" << std::endl;
        std::cout << "Type: ";

        if (typeid(*figures[i]) == typeid(Circle)) {
            std::cout << "circle" << std::endl;
        }
        else if (typeid(*figures[i]) == typeid(Ellipse)) {
            std::cout << "ellipse" << std::endl;
        }
        else if (typeid(*figures[i]) == typeid(Square)) {
            std::cout << "square" << std::endl;
        }
        else if (typeid(*figures[i]) == typeid(Rectangle)) {
            std::cout << "rectangle" << std::endl;
        }

        std::cout << "area: " << figures[i]->area() << std::endl;
        std::cout << "perimeter: " << figures[i]->perimeter() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
