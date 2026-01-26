#pragma once

#include <iostream>

class Entity {

public:
	Entity() 
	{
		std::cout << "Entity created\n";
	};
	~Entity() 
	{
		std::cout << "Entity destroyed\n";	
	};

protected:
	float x = 0.0f;
	float y = 0.0f;

};


class Player : public Entity 
{
public:
	Player() 
	{
		std::cout << "Player created\n";
	};
	~Player() 
	{
		std::cout << "Player destroyed\n";	
	};


private: 
	char* name = nullptr;

};



int main()
{
	Player player;

	std::cin.get();
}