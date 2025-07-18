#include <iostream>

int main()
{ 
	//nullptr = 0.
	int number = 10;
	void* pointer = &number;

	//*pointer = 20;
	// C++ 형변환은 4가지로 구분해서 사용,
	//int* pointer2 = (int*)pointer;
	int* pointer2 = reinterpret_cast<int*>(pointer);
	*pointer2 = 20;

	//Dynamic Allocation.
	char* buffer = new char[20];

	// 메모리 설정.
	memset(buffer, 0, sizeof(char) * 20);

	//삭제는 delete로.
	delete[] buffer;

	// 의미 없음. 바로 종료되지 말라고 추가함.
	std::cin.get();
}