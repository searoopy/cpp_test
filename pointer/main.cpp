#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifdef _DEBUG
#define new  new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define new new
#endif

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

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(158);


	// todo : 메로리 릭 일부러
	int* intpointer = new int;


	//new int[10];

	//동적 할당
	//char* buffer = new char[10];

	//char* buffer1 = buffer;
	//char** buffer2 = &buffer;





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