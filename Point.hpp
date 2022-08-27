#pragma once

class Point {
public:
    Point();
    Point(double, double);

    double getX();
    double getY();
    void setX(double);
    void setY(double);

    double distance(Point);

private:
    double x;
    double y;
};