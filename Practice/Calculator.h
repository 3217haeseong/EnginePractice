#pragma once
class Calculator
{
public:

	Calculator() : addCount(0), divideCount(0), subtractCount(0), multiplyCount(0)
	{
		
	}

	int Add(int x, int y);

	int Divide(int x, int y);

	int Subtract(int x, int y);

	int Multiply(int x, int y);

	void ShowOperationCount();

private:
	
	int addCount;
	int divideCount;
	int subtractCount;
	int multiplyCount;

};