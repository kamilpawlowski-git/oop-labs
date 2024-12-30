#include <iostream>

int main()
{
    int number;
    std::cout << "Type your number: ";
    std::cin >> number;

    if(number < 0)
    {
        std::cout << "bad input";
        return 0;
    } 

    int sum = 0;
    for(int i = 0; i <= number; i++)
    {
        std::cout << i << std:: endl;
        sum += i;
    }
     std::cout << sum << std::endl;
}