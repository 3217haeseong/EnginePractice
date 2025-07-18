#include "Player.h"

void Engine::Player::Move(int xa, int ya)
{
	x += xa * speed;
	y += ya * speed;
}