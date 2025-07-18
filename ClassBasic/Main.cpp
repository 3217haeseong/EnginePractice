#include <iostream>
#include "Player.h"

int main()
{
	// RAII.
	{
		Engine::Player player;
		player.SetX(10);
	}

	std::cout << "Hello\n";
	std::cin.get();
}


