#include "CPlayer.h"
#include <iostream>

Player::Player()
{
}

Player::Player(const char* inName)
	:x(0), y(0), speed(0)
{
	size_t length = strlen(inName) + 1;
	name = new char[length];
	strcpy_s(name, length, inName);

}

Player::~Player()
{
	if (name)
	{
		delete[] name;
		name = nullptr;
	}
}



void Player::Move(int x, int y)
{
	SetX(x);
	SetY(y);
}
