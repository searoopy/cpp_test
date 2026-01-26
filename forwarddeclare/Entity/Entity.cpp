#include <iostream>
#include "Entity.h"
#include "../Vector.h"

using namespace wanted;


Entity::Entity()
{

}

Entity::Entity(int x, int y)
{
	position = new Vector(x,y,0);


}

Entity::Entity(const Entity& other)
{
	std::cout << "copy class\n";

	// °ª º¹»ç.
	
	position = new Vector( *other.position );
	
	
}

Vector* wanted::Entity::GetPos()
{
	return position;
}


Entity::~Entity()
{
	if (position)
	{
		delete position;
		position = nullptr;
	}
	
}
