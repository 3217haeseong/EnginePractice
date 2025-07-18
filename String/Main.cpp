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

// ��ҹ��� ��ȯ �Լ�. 
char ToUpperCase(char lowercase);

// 
char ToLowerCase(char uppercase);

//Ŭ����
// class_Ŭ���� �̸� { };

class Player
{
	// �Լ�.
public:
	// ������(Ŭ���� �̸��� �Ȱ��� �Լ�/ ��ȯ�� ����),
	Player(const char* name)
	{
		// ���޹��� ���ڿ��� ���� ���ϱ�.
		size_t length = strlen(name) + 1;

		// ���� ������ ũ�� �Ҵ�.
		this->name = new char[length];

		// �� ����.
		strcpy_s(this->name, length, name);
	}
	//�Ҹ���(��ü�� ������ �� ȣ��Ǵ� �Լ�.)
	~Player()
	{
		// ����/�Ҹ�/����
		if (name != nullptr)
		{
			delete[] name;
		}
	}

	//�̸� ��� 
	void PrintName()
	{
		std::cout << "Name: " << name << "\n";
	}

private:
	// ����.
	char* name = nullptr;


};

int main()
{
	// �޸� ���� �˻�
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	char test = 'a';
	int number = test;

	auto string = "RonnieJ";
	std::cout << string << "\n";

	// ũ�� ���غ���.
	int length = sizeof(string);
	
	// ���� ���� ���ϴ� �Լ�.
	size_t stringLength = strlen(string);

	char name[7] = { 'R', 'o', 'n','n','i','e','\0'};

	//std::cout << name << "\n";

	//const wchar_t* name2 = L"RonnieJang";
	const wchar_t* name2 = TEXT("RonnieJang");

	// Person ��ü ����.
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
