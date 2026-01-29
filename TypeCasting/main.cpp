#include <iostream>


class A
{
public:
	virtual ~A() {};
	//
	//virtual void Func() {};


};


class B: public A
{
	
};

void PrintString(char* string)
{
	std::cout << string << "\n";
}

int main()
{


	const char* name = "leesh";
	PrintString(const_cast<char*>(name) );


	int number = 10;
	float floatNumber = static_cast<float>(number);


	A* a = new B();
	B* b = static_cast<B*>(a); 
	B* b2 = reinterpret_cast<B*>(a); 
	B* b3 = dynamic_cast<B*>(a);

	std::cin.get();
}


