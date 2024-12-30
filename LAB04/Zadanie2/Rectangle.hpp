#pragma once

#include "Figure.hpp"

class Rectangle : public Figure
{
    private:
        double m_a;
        double m_b;

    protected:
        // parametrized constructor (why this one is protected?)
        Rectangle(double a, double b, const Point &p, std::string name) : m_a(a), m_b(b), Figure(p, "Square") {}

    public:
        // parametrized constructor
        Rectangle(double a, double b, const Point& p) : m_a(a), m_b(b), Figure(p, "Rectangle") {}

        /* TODO override the area() function properly */
        double area() const override
        {
            return m_a * m_b;
        }

        /* TODO create proper setters and getters for for sides */
        void setA(int a) { m_a = a; }
        void setB(int b) { m_b = b; }
        double getSideA() { return m_a; }
        double getSideB() { return m_b; }

        void description() const override 
        {
            std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
            printCentre();
        }
};