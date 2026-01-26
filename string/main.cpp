#include <iostream>
#include <string>
#include <tchar.h>
#include <Windows.h>


#define MYTEXT(value) L##value
#define MYTEST(value1, value2) value1##value2


class Player
{
public:
	//»ý¼ºÀÚ.
	Player(const char* inName)
	{
		size_t _length = strlen(inName) + 1;
		name = new char[_length];

		strcpy_s(name, _length, inName);



	}


	~Player()
	{
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

private:
	char* name = nullptr;

};


int main()
{

	const char* teststring = "abccccccc";


	std::cout << teststring << "\n";


	teststring = "abc";



	char buffer[6]
		= { 'a', 'b', 'c', 'd', 0 };

	std::cout << buffer << "\n";


	Player player("ganada");



	//const wchar_t* wideString = L"Hello wide string";
	const wchar_t* wideString = MYTEXT("Hello wide string");

	std::wcout << wideString << TEXT("\n");

	auto test = MYTEST(10, 20);




}