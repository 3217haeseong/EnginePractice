#include <iostream>

int Function(int number)
{
	return number;
}

// 두 값을 교환하는 함수.
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

typedef bool (*Comparer)(int, int);
using Comparer = bool (*)(int, int); 

bool Greater(int a, int b)
{
	return a > b;
}

bool Less(int a, int b)
{
	return a < b;
}

// 버블 정렬 함수.
// Dependecy Injection(의존성 주입).
// 커플링(의존성) 제거 패턴.
void BubbleSort(int array[], int length, Comparer comparer =Greater)
{
	// 정렬 
	for (int ix = 0; ix < length; ++ix)
	{
		for (int jx = 0; jx < length - 1; ++jx)
		{
			// 두개씩 비교.
			//if (array[jx] > array[jx + 1]
			if (comparer(array[jx], array[jx + 1]))
			{
				Swap<int>(array[jx], array[jx + 1]);
			}
		}
	}
}

class Compare
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

class CompareLess
{
public:
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

int main()
{
	// 함수 포인터 선언.
	//int(*FunctionPointer)(int) = nullptr;

	//// 함수 포인터에 함수 할당.
	//FunctionPointer = Function;

	//// null 체크 후 함수 간접 호출.
	//if (FunctionPointer != nullptr)
	//{
	//	std::cout<<FunctionPointer(300) <<"\n";

	//}

	int array[] = { 4,3,5,2,1 };
	int length = 5;

	BubbleSort(array, length);

	for (int& value : array)
	{
		std::cout << value << " ";
	}

	// 람다 함수.
	// [] -> 캡처(논리적으로 이해하기 상당히 어려움.)
	// -> javascript 클로저.
	// ()-> 파라미터 정의.
	// {} -> 본문 작성.
	// (); 호출가능
	// -> int 반환형 명시적 선언.
	auto function = [](int a, int b)
					{ 
						std::cout << (a + b) << "\n"; 
		            }  (10,20);

	std::cout << "\n";
	std::cin.get();
}