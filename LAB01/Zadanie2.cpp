#include <iostream>
#include <sstream>

int main()
{   
    int number;
    int array[5];
    
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Your " << i + 1 << " number: ";
        std::cin >> number;
        array[i] = number;
    }

    for(int i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;
}