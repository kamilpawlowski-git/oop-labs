#include <iostream>
#include "../Zadanie4/Point.h"

class Circle
{   
    private:
        double* _radius;
        Point _s;
    
    public:
        Circle(double radius, Point s) : _s(s)
        {
            _radius = new double(radius);
        }

        ~Circle() { delete _radius; }

        double GetRadius() const
        {
            return *_radius;
        }

        void GetS() const
        {
            _s.Point::Display();
        }

        void SetRadius(const double& radius)
        {
            _radius = new double(radius);
        }

        void SetS(Point& s)
        {
            _s = s;
        }

        double area()
        {
            return 3.14 * (*_radius) * (*_radius);
        }
};