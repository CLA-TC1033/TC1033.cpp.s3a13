#include <cmath>
#include <math.h>
#include "Point.hpp"

//Constructores
Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

//Getters
double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

//Setters
void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

//Distancia entre el punto actual y otro punto

double Point::distance(Point p)
{
    return sqrt(pow(getX()-p.getX(),2)  +  pow( (getY()-p.getY()),2));
}