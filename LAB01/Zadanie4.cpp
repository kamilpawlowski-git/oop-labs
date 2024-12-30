#include <iostream>

double fahrenheitCelcius(double& fahrenheit)
{
    double celcius;
    celcius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celcius;
}

int main()
{
    double temperature;
    std::cout << "temperature in fahrenheit: ";
    std::cin >> temperature;  

    std::cout << fahrenheitCelcius(temperature) << std::endl;
}