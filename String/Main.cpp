#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <Windows.h>

#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define new new
#endif

size_t GetStringLength(const char* targetString);

// 대소문자 변환 함수. 
char ToUpperCase(char lowercase);

// 
char ToLowerCase(char uppercase);

//클래스
// class_클래스 이름 { };

class Player
{
	// 함수.
public:
	// 생성자(클래스 이름과 똑같은 함수/ 반환을 안함),
	Player(const char* name)
	{
		// 전달받은 문자열의 길이 구하기.
		size_t length = strlen(name) + 1;

		// 내부 변수의 크기 할당.
		this->name = new char[length];

		// 값 복사.
		strcpy_s(this->name, length, name);
	}
	//소멸자(객체가 해제될 때 호출되는 함수.)
	~Player()
	{
		// 해제/소멸/삭제
		if (name != nullptr)
		{
			delete[] name;
		}
	}

	//이름 출력 
	void PrintName()
	{
		std::cout << "Name: " << name << "\n";
	}

private:
	// 변수.
	char* name = nullptr;


};

int main()
{
	// 메모리 누수 검사
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	char test = 'a';
	int number = test;

	auto string = "RonnieJ";
	std::cout << string << "\n";

	// 크기 구해보기.
	int length = sizeof(string);
	
	// 문자 개수 구하는 함수.
	size_t stringLength = strlen(string);

	char name[7] = { 'R', 'o', 'n','n','i','e','\0'};

	//std::cout << name << "\n";

	//const wchar_t* name2 = L"RonnieJang";
	const wchar_t* name2 = TEXT("RonnieJang");

	// Person 객체 생성.
	Player person("Ronnie");
	person.PrintName();

	/*
	std::cout << string
			  << " , Length:"
			  << stringLength << "\n";
	
	 
	
	std::cout<< "Ron\0nieJ" <<"\n";

	std::cout << GetStringLength(string) << "\n";
	*/

	std::cout << ToUpperCase('i') <<"\n";
	std::cout << ToLowerCase('R') <<"\n";
	std::cin.get();
}

size_t GetStringLength(const char* targetString)
{
	size_t num=0;

	for (int i = 0; targetString[i] != '\0'; ++i)
	{
		num++;
	}

	return num;
}

char ToUpperCase(char lowercase)
{
	char Upper;

	Upper = lowercase - 32;
	return Upper;
}

char ToLowerCase(char uppercase)
{
	char Lower;

	Lower = uppercase + 32;

	return Lower;
}
