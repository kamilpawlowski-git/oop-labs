#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    kp::jpo::ComplexNumber number(3, 4);
    kp::jpo::ComplexNumber number2(10, 20);

    number += number2;

    std::cout << number + number2 << std::endl;
    std::cout << (number += number2);
    std::cout << (number -= number2) << std::endl;
    std::cout << (number *= number2) << std::endl;
    std::cout << (number /= number2) << std::endl;
    std::cout << number - number2 << std::endl;
    std::cout << number * number2<< std::endl;
    std::cout << number / number2<< std::endl;
}
