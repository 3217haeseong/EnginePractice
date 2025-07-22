#include <iostream>

class Point
{
public:
    Point(int x = 0, int y = 0)
        : x(x), y(y)
    {
    }

    friend std::ostream& operator<< (std::ostream& os, const Point& p);

private:
    int x = 0;
    int y = 0;
};

std::ostream& operator<< (std::ostream & os, const Point & p)
{
    return os << "(" << p.x << ", " << p.y << ")";
}

int main()
{
    Point point(20, 30);
    std::cout << point << "\n";

    std::cin.get();

}