#include <iostream>

class Entity
{
public:
	Entity() : x(0), y(0)
	{
		std::cout << "Entity()\n";
	}

	virtual ~Entity()
	{
		std::cout << "~Entity()\n";
	}

	// 가상 함수.
    void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}

	// 자식한테도 안 물려줌. 
protected:
	int x;
	int y;
};

class Player : public Entity
{
public:
	Player()
	{

	}

	Player(const char* name) : Entity()
	{
		size_t length = strlen(name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, name);

		std::cout << "Player()\n";
	}

	Player(const Player& other)
	{
		x = other.x;
		y = other.y;

		size_t length = strlen(other.name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, other.name);
		std::cout << "Player()\n";
	}

	~Player()
	{
		delete[] name;
		std::cout << "~Player()\n";
	}

	/*void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}*/

private:
	char* name = nullptr;
};

int main()
{

	Player player("Player");
	player.Move(5, 5);

	// 자식 객체를 생성해서 부모 객체로 저장(치환).
	// 이미 형변환 (자식 -> 부모 변환).
	// 업 캐스팅 (Up-Casting)
	Entity* entity = new Player("Player2");

	Entity* entity2 = new Entity();

	// 다운-캐스팅 (Down-Casting).
	//Player* palyer3 = (Player*)entity;
	Player* player3 = (Player*)entity2;
	

	std::cin.get();
}