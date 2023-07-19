#ifndef POINT_HPP
#define POINT_HPP

#include <vector>

class Point
{
private:
    double x;
    double y;

public:
    Point(double x, double y);
    double distanceTo(Point p);
    Point closestTo(std::vector<Point> Koordinat_4leafSigil);
    double getX();
    double getY();
};

#endif