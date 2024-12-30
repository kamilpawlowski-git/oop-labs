#include <iostream>
#include <string>
#include <algorithm>

std::string reverseee(std::string& word)
{
    std::string temp = word;
    for(int i = 0; i < word.size(); i++)
    {
        word[i] = temp[word.size() - i - 1];
    }
    return word;
}

int main()
{
    std::string word = "kamil";
    std::cout << "my function: " << reverseee(word) << std::endl;

    std::string word2 = "pawlowski";
    std::reverse(std::begin(word2), std::end(word2));
    std::cout << "std::reverse: " <<  word2 << std::endl;
}