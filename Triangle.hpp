#pragma once
#include "Point.hpp"

class Triangle {
public:
    Triangle();
    Triangle(Point, Point, Point);
    double perimeter();
    double area();
    
    Point getVertex1();
    Point getVertex2();
    Point getVertex3();
private:
    Point vertex1;
    Point vertex2;
    Point vertex3;
};