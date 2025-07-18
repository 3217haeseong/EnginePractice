#pragma once
#include <iostream>

namespace Engine
{
	class Player
	{
	public:
		// 생성자 (Constructor).
		// 객체(Object)가 생성될 때 호출되는 함수.
		// 클래스 이름과 똑같음. 반환형 지정 안함.
		Player() : x(0), y(0), speed(0)
		{
			std::cout << "Constructor has been called\n";
		}

		// 소멸자 (Destructor).
		~Player()
		{
			std::cout << "Destructor has been called\n";
		}

		// 함수 선언
		void Move(int xa, int ya);

		// 접근 함수(Getter).
		int GetX() const
		{
			return x;
		}

		// 설정 함수 (Setter)
		void SetX(int newX)
		{
			x = newX;
		}

		int GetY() const
		{
			return y;
		}

	private:
		int x = 0;
		int y = 0;
		int speed = 0;

	};
}