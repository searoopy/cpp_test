#include <iostream>



class Point
{
public:
	Point(int x = 0, int y = 0)
		: x(x), y(y)
	{
	}

	//µ¡¼À
	Point Add(const Point& other) const
	{
		return Point(x + other.x, y + other.y);
	}


	friend Point Add(const Point& p1, const Point& p2)
	{
		return Point(p1.x + p2.x, p1.y + p2.y);
	}


	//Point operator+(const Point& other)
	//{
	//	return Point(x + other.x, y + other.y);	
	//}

	friend Point operator+(const Point& left, const Point& right)
	{
		return Point(left.x + right.x, left.y + right.y);
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& point)
	{
		os << "Point(" << point.x << ", " << point.y << ")\n";
		return os;
	}

	int operator[](int index)
	{
		if (index == 0)
			return x;
		else if (index == 1)
			return y;
		else
			throw std::out_of_range("Index out of range");
	}

public:
	int x = 0;
	int y = 0;


};

//Point Add(const Point& p1, const Point& p2)
//{
//	return Point(p1.x + p2.x, p1.y + p2.y);
//}


//std::ostream& operator<<(std::ostream& os, const Point& point)
//{
//	os << "Point(" << point.x << ", " << point.y << ")\n";
//	return os;	
//}

int main()
{

	Point p1(1,1);
	Point p2(5, 5);

	//Point p3 = p1 + p2; //Error	

	Point p3 = p1.Add(p2);

	Point p4 = Add(p1, p2);

	Point p5 = p1 + p2;

	//Point p3(p1.x + p2.x, p1.y + p2.y);




	int xx  = p5[0];


	std::cout << p3 << "\n";

	//std::cout.operator<<(p3) << "\n" << "100\n";  //error.
	std::cout.operator<<(10) << "\n" << "100\n";  //fine.


	std::cout << p3 << "\n";


	std::cin.get();

}