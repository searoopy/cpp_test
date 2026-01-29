#pragma once


enum VariableType
{
	INT,
	FLOAT,
	STRING
};	
template<typename T, VariableType Type>
class Variable
{
public:
	T GetVALUE() { return data;  };
	
private:
	char* name = nullptr;
	VariableType type = Type;
	void* data = nullptr;
};




class Player
{
public:
	Player();
	Player(int id, int score, float attack);
	~Player();



	void Serialize(const char* path);
	void Deserialize(const char* path);


public:
	int score = 0;
	int id = 0;
	float attack = 0.0f;
};

