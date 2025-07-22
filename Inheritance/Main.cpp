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

	// ���� �Լ�.
    void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}

	// �ڽ����׵� �� ������. 
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

	// �ڽ� ��ü�� �����ؼ� �θ� ��ü�� ����(ġȯ).
	// �̹� ����ȯ (�ڽ� -> �θ� ��ȯ).
	// �� ĳ���� (Up-Casting)
	Entity* entity = new Player("Player2");

	Entity* entity2 = new Entity();

	// �ٿ�-ĳ���� (Down-Casting).
	//Player* palyer3 = (Player*)entity;
	Player* player3 = (Player*)entity2;
	

	std::cin.get();
}