#include <iostream>
#include <memory> // smart pointer ����� ����

class Test
{
public:
	Test()
	{
		std::cout << "��ü�� ������.\n";
	}

	~Test()
	{
		std::cout << "��ü�� ������.\n";
	}
};

int main()
{
	// ��ü ����
	std::unique_ptr<Test> test = std::make_unique<Test>();
	//std::unique_ptr<Test> test1 = test;
	
}