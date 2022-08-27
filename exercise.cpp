#include <iostream>

#include "Triangle.hpp"

int main()
{
    Triangle t=Triangle(Point(3,1), Point(1,2), Point(4,4));

    std::cout << "Perimetro del triangulo=" << t.perimeter() << "\n";

    std::cout << "Area del triangulo=" << t.area() << "\n";

}