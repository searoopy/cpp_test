#pragma once


class Vector;
namespace wanted
{
class Entity
{
public:
	Entity();
	~Entity();
	Entity(int x, int y);

	//복사 생성자
	Entity(const Entity& other);

public:

	Vector* GetPos();
	

private:
	Vector* position = nullptr;
};

}