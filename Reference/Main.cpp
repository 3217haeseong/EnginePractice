#include <iostream>

// 함수.
// Call By Reference.
void Increment(int& number)
{
	++number;
}

int main()
{
	int number = 10;
	
	// 레퍼런스는 다른 변수를 참조.
	int& ref = number;

	ref = 30; 

	Increment(number);

	std::cout << number << "\n";

	std::cin.get();

}