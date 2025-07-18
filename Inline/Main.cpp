#include <iostream>

#define FORCEINLINE __forceinline

// Macro 기반 인라인 함수.
//#define Square(x) ((x) * (x))
__forceinline int Square(int x)
{
	return  x * x;
}

int main()
{
	std::cout << Square(10) << "\n";

	std::cin.get();
}