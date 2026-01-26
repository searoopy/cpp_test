#pragma once


class Vector
{

public:
	Vector() = default;
	~Vector() = default;

	Vector( int x, int y, int z )
		: x( x ), y( y ), z( z )
	{

	}

	Vector(  Vector& other )
		: x( other.x ), y( other.y ), z( other.z )
	{
	}

	int GetX() {
		return x;
	}
	int GetY()
	{
		return y;
	}
	int GetZ()
	{
		return z;
	}

private:
	int x = 0;
	int y = 0;
	int z = 0;
};