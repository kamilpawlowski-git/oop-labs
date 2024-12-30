#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;

    std::cout << randomNumber << std::endl;

    int number {};
    do
    {   
        std::cout << "guess the number: ";
        std::cin >> number;
        if(randomNumber > number)
            std::cout << "guess higher" << std::endl;
        else if(randomNumber < number)
            std::cout << "guess lower" << std::endl;  
    } while (randomNumber != number);

    std::cout << "success! the number was: " << number << std::endl;
}