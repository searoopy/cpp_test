#include <iostream>


//#define Square(x) ((x) * (x))

__forceinline int Square(int x)
{
	return x * x;
}

int main()
{
	int number = Square(10);
	std::cout << number;
}