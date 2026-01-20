#include <iostream>

void DeletePointer(void*& pointer)
{
	if (pointer != nullptr)
	{
		delete pointer;
		pointer = nullptr;
	}
}

int main()
{


	//동적 할당
	char* buffer = new char[10];

	char* buffer1 = buffer;
	char** buffer2 = &buffer;





	//void* pointer = nullptr;
	void* pointer = new int;
	DeletePointer(pointer);

	if (pointer != nullptr)
	{
		std::cout << "pointer is not null\n";
	}
	else
	{
		std::cout << "pointer is null\n";
	}


	std::cin.get();
}