#include <iostream>

class Point
{
    private:
        int _x;
        int _y;
    
    public:
        Point(int x, int y);

        int GetX() const;
        
        int GetY() const;
        
        void SetX(int x);

        void SetY(int y);

        void Display() const;
};