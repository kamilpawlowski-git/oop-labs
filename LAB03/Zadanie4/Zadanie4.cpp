#include <iostream>
#include "Point.h"

int main()
{
    Point point1(0, 0);
    point1.Display();

    point1.SetX(3);
    point1.SetY(4);

    std::cout << point1.GetX() << std::endl;
    std::cout << point1.GetY() << std::endl;
    point1.Display();

}