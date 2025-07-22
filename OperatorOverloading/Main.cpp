#include <iostream>
#include "Vector2.h"

class Point
{
public:
    Point(int x = 0, int y = 0)
        : x(x), y(y)
    {
    }

    friend std::ostream& operator<< (std::ostream& os, const Point& p)
    {
        return os << "(" << p.x << ", " << p.y << ")";
    }        

private:
    int x = 0;
    int y = 0;
};

//std::ostream& operator<< (std::ostream & os, const Point & p)
//{
//    return os << "(" << p.x << ", " << p.y << ")";
//}

void Increment()
{
    int count = 0;
    ++count;
    std::cout << count << "\n";
}

int main()
{
    Point point(20, 30);
    std::cout << point << "\n";

    Vector2 position(10, 20);
    Vector2 speed(2, 2);
    Vector2 power(3, 4);

    //Vector2 result = position.Add(speed.Multiply(power));
    Vector2 result = position + speed * power;

    std::cout << result << "\n";

    Increment();
    Increment();
    Increment();

    std::cin.get();

}