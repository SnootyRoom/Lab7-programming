#include "Geometry.h"
#include <cmath>

double Geometry::area(double radius)
{
    return radius * radius * PI;
}

double Geometry::area(double a, double b)
{
    return a * b;
}

double Geometry::area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}