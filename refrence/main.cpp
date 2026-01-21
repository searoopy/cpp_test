#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


//call by value
//void Increment(int value)
//{
//	++value;
//}


//call by refrence.
//찹조에 의한 호출
//참조 = 주소 -> 주소값 복사.
//void Increment(int* value)
//{
//	++(*value);
//}

//call by refrence.
//찹조에 의한 호출
//참조 = 주소 -> 주소값 복사.
void Increment(int& value)
{
	++value;
}




int main()
{
	//int& ref = a;
	//ref = 10;
	//int a = 5;

	int number = 10;
	Increment(number);

	std::cin.get();
}