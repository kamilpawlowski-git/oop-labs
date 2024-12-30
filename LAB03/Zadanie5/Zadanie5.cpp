#include <iostream>
#include "Circle.h"

int main()
{
    Circle circle1(5, {3, 4});

    std::cout << circle1.GetRadius() << std::endl;
    circle1.GetS();
    std::cout << circle1.area() << std::endl;
    
    std::cout << std::endl;

    circle1.SetRadius(7);
    Point myPoint(5, 6);
    circle1.SetS(myPoint);
    std::cout << circle1.GetRadius() << std::endl;
    circle1.GetS();
    std::cout << circle1.area() << std::endl;



    
}