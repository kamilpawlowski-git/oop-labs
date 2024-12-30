#include <iostream>
#include <string>
#include <algorithm>

void is_palindrom(const std::string& word)
{
    std::string temp = word;
    for(int i = 0; i < word.size(); i++)
    {
        if(temp[i] != word[word.size() - i - 1])
        {
            std::cout << "not palindrom" << std::endl;
            goto exit;
        }
    }
    std::cout << "it is palindrom" << std::endl;
    exit:
}

void is_palindrom_std_reverse(const std::string& word)
{
    std::string temp = word;
    std::reverse(std::begin(temp), std::end(temp));
    if(word == temp)
        std::cout << "it is palindrom" << std::endl;
    else
        std::cout << "not palindrom" << std::endl;
}   

int main()
{
    std::string word = "kamil";
    std::string word2 = "kayak";

    is_palindrom(word);
    is_palindrom(word2);
    is_palindrom_std_reverse(word);
    is_palindrom_std_reverse(word2);
}