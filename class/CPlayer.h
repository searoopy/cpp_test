#pragma once

class Player
{


public:
	inline void SetX(const int inX)
	{
		x = inX;
	}

	inline void SetY(const int inY)
	{
		y = inY;
	}
	inline void SetSpeed(const int inSpeed)
	{
		speed = inSpeed;
	}


	inline int GetX() const
	{
		return x;
	}


	/*Player() = default;
	~Player() = default;*/
	Player() ;
	Player(const char* inName);
	~Player() ;

	void Move(int x, int y);


private:
	int x = 0;
	int y = 0;
	int speed = 0;


	//ÀÌ¸§°ª.
	char* name = nullptr;




};
