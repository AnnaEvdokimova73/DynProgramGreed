#include <iostream>

int getFibonacci(int index, int* mem)
{
    if (index == 0)
    {
        // mem[0] = 0;
        return 0;
    }
    else if (mem[index] != 0)
    {
        return mem[index];
    }

    if ((index == 1) || (index == 2))
    {
        mem[1] = 1;
        return 1;
    }

    mem[index] = getFibonacci(index - 1, mem) + getFibonacci(index - 2, mem);
    return mem[index];
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0;
    std::cout << "Введите число (индекс) :\t";
    std::cin >> num;
    int* mem = new int[num];

    for (int i = 0; i < num; i++) {
        mem[i] = 0;  // заполняем массив нулями
    }

    std::cout << "Числа Фибоначчи : ";
    for (int i = 0; i < num; ++i)
    {
        std::cout << getFibonacci(i, mem) << "\t";
    }

    delete[] mem;
}

