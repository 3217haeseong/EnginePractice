// 헤더 인클루드.
#include <iostream>

// 타입 재정의.
//typedef __int32 int32;
using int32 = __int32;

// 함수 선언/정의.
// const char* -> 문자열 선언.
//void Log(const char* message);

#include "Log.h"

int main()
{
	Log("Hello World");
	std::cin.get();
}


//// 진입점 (Entry Point).
//int main()
//{
//	// 출력.
//	// \n 개행 (엔터). " " > 문자열(줄). 10 정수.
//	// integer(decimal) char(문자)-char-char-char string(줄).
//	// 소수(3.14) float 부동소수형.
//	// C -> C++ -> C#.
//	std::cout << "Hello C++ " << 10 << " string test" << "\n";
//	printf("Hello World %d %s \n", 10, "string test");
//
//	// 입력.
//	// int - integer(정수).
//	//int32 value3 = 0;
//	//__int64 value4 = 0;
//	int value1 = 0;
//	int value2 = 0;
//
//	// 안내.
//	std::cout << "첫 번째 숫자 입력 : ";
//	std::cin >> value1;
//
//	// 안내.
//	std::cout << "두 번째 숫자 입력 : ";
//	std::cin >> value2;
//
//	std::cout 
//		<< "결과 value1: " << value1 
//		<< " value2: " << value2 
//		<< "\n";
//
//	// 의미 없음.
//	// 바로 종료되지 말라고 넣는 코드.
//	std::cin.get();
//}