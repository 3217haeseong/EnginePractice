#pragma once

class Player
{
public:
	// �⺻ ������ (�Ķ���͸� ���� ����),
	Player()
	{

	}
	
	// �Լ� �����ε� (overload).
	Player(int x, int y) : x(x), y(y)
	{

	}

	void ShowPosition() const;

	__forceinline int GetX() const { return x; }
	__forceinline int GetY() const { return y; }

	__forceinline void SetX(int newX) { x = newX; }
	__forceinline void SetY(int newY) { y = newY; }

	// ģ�� ����.
	friend void SetPosition(Player& player, int x, int y);

private:
	int x = 0;
	int y = 0;

};

void SetPosition(Player& player, int x, int y);
