#include <iostream>
#include <string>

class Animal
{
    public:
        virtual void makeSound()
        {
            std::cout << "Animal makes sound" << std::endl;
        }
};

class Dog : public Animal
{
    public:
        void makeSound() override //nie musi byc override, dziala i tak (przyklad klasa cat)
        {
            std::cout << "Woof!" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        void makeSound()
        {
            std::cout << "Meow!" << std::endl;
        }
};

Animal* chooseAnimal(int number)
{
    if(number % 2 == 0)
    {
        return new Dog();
    }
    return new Cat();
}

int main() 
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal* animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}