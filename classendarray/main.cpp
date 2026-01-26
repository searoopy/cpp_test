#include <iostream>



class Entity
{
public:
	Entity()
	{
		std::cout << "constructor called\n";
	}

	~Entity() = default;

	void ShowName() const
	{
		std::cout << "Entity.\n";
	}

	Entity* GetSelf() 
	{
		return this;
	}
};


int main()
{


	//const int count = 5;
	//Entity* entities[count] = {};

	////memset(entities, 0, sizeof(Entity*) * count);

	//for (int ix = 0; ix < count; ++ix)
	//{
	//	entities[ix] = new Entity();
	//}

	//for (Entity*& entity : entities)
	//{
	//	delete entity;
	//	entity = nullptr;
	//}


	//foreach
	//for(const Entity& entity : entities)
	//{
	//	entity.ShowName();

	//}


	Entity* entity = new Entity();
	std::cout << entity << "\n";
	std::cout << entity->GetSelf() << "\n";

	delete entity;

	std::cin.get();


}