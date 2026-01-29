#include <iostream>

template <typename T>
void Swap(T&a , T& b)
{
	T temp = a;
	a = b;
	b = temp;
}	

//void Swap(float& a, float& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}


class abc {
public:
	virtual ~abc() {

	};
};

class bbb :public abc
{
};

int main()
{
	int a = 10;
	int b = 20;
	Swap<int>(a, b);


	float aa = 10.0f;
	float bb = 20.0f;
	Swap<float>(aa, bb);


	abc* abcd = new abc();
	bbb* bbbb = new bbb();


	const type_info& info = typeid(abcd);
	const type_info& info2 = typeid(bbbb);


	std::cout << "1.type of a is" << info.name() << "\n";	
	std::cout << "2.type of a is" << info2.name() << "\n";	

	delete abcd;

	std::cin.get();
}