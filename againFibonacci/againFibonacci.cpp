#include <iostream>

int getFibonacci(int index)
{
    if (index == 0)
    {
        return 0;
    }

    if ((index == 1) || (index == 2))
    {
        return 1;
    }
    return  getFibonacci(index - 1) + getFibonacci(index - 2);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0;
    std::cout << "Введите число (индекс) :\t";
    std::cin >> num;

    std::cout << "Числа Фибоначчи : ";
    for (int i = 0; i < num; ++i) 
    {
        std::cout << getFibonacci(i) << "\t";
    }
}

