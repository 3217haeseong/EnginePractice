#pragma once
#include <iostream>

class Vector2
{
public:
	Vector2(int x = 0, int y = 0) : x(x), y(y)
	{

	}

	Vector2 operator + (const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	inline Vector2 Add(const Vector2& other) const
	{
		//return Vector2(x + other.x, y + other.y);
		return *this + other;
	}

	inline Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	friend std::ostream& operator<<(
		std::ostream& os,
		const Vector2& vector
		)
	{
		return os << "(" << vector.x << "," << vector.y << ")";
 	}

private:
	int x = 0;
	int y = 0;
};