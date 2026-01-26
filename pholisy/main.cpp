#include <iostream>

#define NAME(x) #x


#define PURE = 0

class NameInterface
{
public:
	//순수 가상 함수.
	virtual const char* GetName() const PURE;
};

class Entity : public NameInterface
{
public :
	virtual const char* GetName() const override
	{
		return NAME(Entity);
	
	}

public:

};

class Player : public NameInterface
{
public:
	Player(const char* name)
	{
		size_t length = strlen(name) + 1;

		this->name = new char[length];

		strcpy_s(this->name, length, name);
	}

	virtual ~Player()
	{
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

	const char* GetName() const override
	{
		return name;
	}

protected:
	char* name = nullptr;
};


class God :public Player
{

public:
	God() : Player("god")
	{
	}	
	virtual ~God()
	{
	}
public:
	const char* GetName() const
	{
		return name;
	}
};

int main()
{

	Entity* entity = new Entity();
	std::cout << entity->GetName() << "\n";


	//Player* player = new Player("leesh");
	Player* player = new Player("leesh");
	std::cout << player->GetName() << "\n";

	Player* player2 = new God();
	std::cout << player2->GetName() << "\n";


	//NameInterface* nameInterface = new NameInterface();	

	delete entity;
	delete player;
	delete player2;


}