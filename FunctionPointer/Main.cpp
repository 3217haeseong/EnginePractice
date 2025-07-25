#include <iostream>

int Function(int number)
{
	return number;
}

// �� ���� ��ȯ�ϴ� �Լ�.
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

// ���� ���� �Լ�.
// Dependecy Injection(������ ����).
// Ŀ�ø�(������) ���� ����.
void BubbleSort(int array[], int length, Comparer comparer =Greater)
{
	// ���� 
	for (int ix = 0; ix < length; ++ix)
	{
		for (int jx = 0; jx < length - 1; ++jx)
		{
			// �ΰ��� ��.
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
	// �Լ� ������ ����.
	//int(*FunctionPointer)(int) = nullptr;

	//// �Լ� �����Ϳ� �Լ� �Ҵ�.
	//FunctionPointer = Function;

	//// null üũ �� �Լ� ���� ȣ��.
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

	// ���� �Լ�.
	// [] -> ĸó(�������� �����ϱ� ����� �����.)
	// -> javascript Ŭ����.
	// ()-> �Ķ���� ����.
	// {} -> ���� �ۼ�.
	// (); ȣ�Ⱑ��
	// -> int ��ȯ�� ����� ����.
	auto function = [](int a, int b)
					{ 
						std::cout << (a + b) << "\n"; 
		            }  (10,20);

	std::cout << "\n";
	std::cin.get();
}