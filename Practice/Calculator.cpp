#include "Calculator.h"
#include <iostream>

int Calculator::Add(int x, int y)
{
    addCount++;
    int num;

    num = x + y;

    return num;
}

int Calculator::Divide(int x, int y)
{
    divideCount++;
    int num=0;

    if (y != 0)
    {
        num = x / y;
    }
    
    return num;
}

int Calculator::Subtract(int x, int y)
{
    subtractCount++;
    int num;

    num = x - y;

    return num;
}

int Calculator::Multiply(int x, int y)
{
    multiplyCount++;
    int num;

    num = x * y;

    return num;
}

void Calculator::ShowOperationCount()
{
    std::cout << "����: " << addCount << " ���� : " << subtractCount << " ���� : " << multiplyCount << " ������ : " << divideCount << "\n";
}
