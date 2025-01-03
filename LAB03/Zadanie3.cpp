#include <iostream>

class GlobalClass
{
    public:
        GlobalClass() { std::cout << "Constructor of GlobalClass called" << std::endl; }
        ~GlobalClass() { std::cout << "Destructor of GlobalClass called" << std::endl; }
};

class LocalClass
{
    public:
        LocalClass() { std::cout << "Constructor of LocalClass called" << std::endl; }
        ~LocalClass() { std::cout << "Destructor of LocalClass called" << std::endl; }  
};

class BlockClass
{
    public:
        BlockClass() { std::cout << "Constructor of BlockClass called" << std::endl; }
        ~BlockClass() { std::cout << "Destructor of BlockClass called" << std::endl; }
};

GlobalClass globalObject;

int main()
{
    std::cout << "Entering main function" << std::endl;
    
    LocalClass localObject;

    {
        BlockClass blockObject;
    }

    std::cout << "Leaving main function" << std::endl;
}