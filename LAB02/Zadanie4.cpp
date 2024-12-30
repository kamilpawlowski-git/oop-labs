#include <iostream>
#include <string>
#include <ctype.h>

int howManyTimes(std::string sentence, char& character)
{   
    int sum = 0;
    for(int i = 0; i < sentence.size(); i++)
    {   
        if(std::isupper(sentence[i]))
            sentence[i] = std::tolower(sentence[i]);
        if(sentence[i] == character)
            sum++;
    }
    return sum;
}

int main()
{   
    std::string sentence;
    std::cout << "write sentence with words seperated by spaces: ";
    std::getline(std::cin, sentence);
    std::cout << sentence << std::endl;

    char character;
    std::cout << "what character do you want to count in previously inputed sentence?: ";
    std::cin >> character;

    std::cout << howManyTimes(sentence, character) << std::endl;
}