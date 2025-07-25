#include <iostream>
#include <memory> // smart pointer »ç¿ëÀ» À§ÇØ

class Test
{
public:
	Test()
	{
		std::cout << "°´Ã¼°¡ »ı¼ºµÊ.\n";
	}

	~Test()
	{
		std::cout << "°´Ã¼°¡ »èÁ¦µÊ.\n";
	}
};

int main()
{
	// °´Ã¼ »ı¼º
	std::unique_ptr<Test> test = std::make_unique<Test>();
	//std::unique_ptr<Test> test1 = test;
	
}