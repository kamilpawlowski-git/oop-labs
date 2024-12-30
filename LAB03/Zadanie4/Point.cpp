#include <iostream>
#include "Point.h"

Point::Point(int x, int y) : _x(x), _y(y) {}

int Point::GetX() const
{
    return _x;
}

int Point::GetY() const
{
    return _y;
}

void Point::SetX(int x)
{
    _x = x;
}

void Point::SetY(int y)
{
    _y = y;
}

void Point::Display() const
{
    std::cout << "(" << _x << ", " << _y << ")" << std::endl;
}


