#include "Player.h"
#include <iostream>


Player::Player()
	:Player(0, 0, 0.0f)	
{

}

Player::Player(int id, int score, float attack)
	:id(id), score(score), attack(attack)
{

}


Player::~Player()
{
}



void Player::Serialize(const char* path)
{

	//열기
	FILE* file = nullptr;
	fopen_s(&file, path, "wt");
	if (!file)
	{

		std::cout << "failed to open file.\n";
		__debugbreak();
		return;
	}


	//기록할 데이터 만들기.......
	char outputData[256] = {};
	sprintf_s(outputData, 256, "id=%d score=%d attack=%f", id, score, attack);


	size_t length = strlen(outputData);
	memset(outputData + length, 0, 256 - length);	



	//size_t writesize = fwrite(outputData, sizeof(char), 256, file);
	//

	size_t size = fprintf_s(file,"id=%d score=%d attack=%f\n", id, score, attack);

	fclose(file);
}


void Player::Deserialize(const char* path)
{


	FILE* file = nullptr;
	errno_t err = fopen_s(&file, path, "rt");

	if( !file)
	{

		std::cout << "failed to open file.\n";
		__debugbreak();
		return;
	}

	fscanf_s(file, "id=%d score=%d attack=%f\n", &id, &score, &attack);	
	fclose(file);

}