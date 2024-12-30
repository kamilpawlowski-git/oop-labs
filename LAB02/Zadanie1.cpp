#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int count(const std::vector<std::vector<int>>& matrix)
{
    int sum = 0;
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if((i % 2) == 1 || (j % 2) == 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

void PrintMatrix(const std::vector<std::vector<int>>& matrix, int& rows, int& columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{   
    srand(static_cast<unsigned int>(time(0)));

    int rows, columns;
    std::cout << "Podaj liczbe wierszy twojej macierzy: ";
    std::cin >> rows;
    std::cout << "Podaj liczbe kolumn twojej macierzy: ";
    std::cin >> columns;

    std::vector<std::vector<int>> matrix;

    for(int i = 0; i < rows; i++)
    {
        std::vector<int> vec;
        for(int j = 0; j < columns; j++)
        {   
            int randomNumber = rand() % 10;
            vec.push_back(randomNumber);
        }
        matrix.push_back(vec);
    }
    PrintMatrix(matrix, rows, columns);
    std::cout << count(matrix);
}