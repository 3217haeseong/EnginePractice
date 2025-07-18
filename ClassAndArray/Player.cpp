#include "Player.h"
#include <iostream>

// Ctrl + K , Ctrl + O
void Player::ShowPosition() const
{
	std::cout << "x : " << x << ", y: " << y << "\n";
}

void SetPosition(Player& player, int x, int y)
{
	player.x = x;
	player.y = y;
}
