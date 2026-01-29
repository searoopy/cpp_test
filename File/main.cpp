#include <iostream>

#include <tchar.h>
#include <Windows.h>
#include "Player.h"

int main()
{
	//Player player(3, 200, 30.0f);
	Player player;

	//player.Serialize("player.txt");
	player.Deserialize("player.txt");

	//문자열 입출력.
	int score = 100;
	float pi = 3.141592f;

	char formatString[256] = {};
	sprintf_s(formatString, 256, "score=%d pi=%f", score, pi);

	int intvalue = 0;
	float floatvalue = 0.0f;
	sscanf_s(formatString, "score=%d pi=%f", &intvalue, &floatvalue);


	FILE* file = nullptr;
	//std::wcout.imbue(std::locale("korean"));

	fopen_s(&file, "test.txt", "r");
	if (file == nullptr)
	{
		std::cout << "failed to read file.\n";
		__debugbreak();

	}



	fseek(file, 0, SEEK_END);
	size_t filesize = ftell(file);

	std::cout << "file size:" << filesize << "\n";	
	rewind(file);



	//const char* message = "프로그램에서 작성한 문자열값!!!";
	//fputs(message, file);

	//파일 읽기.
	char buffer[1024] = { 0  };
	size_t readsize = fread(buffer, sizeof(char), 1024, file);

	 
	std::cout << "read size:" << readsize << "\n";	
	std::cout << (buffer);






	//while (true)
	//{
	//	//if (fgets(buffer, 256, file) == nullptr)
	//	if (_fgetts(buffer, 256, file) == nullptr)
	//		break;


	//	std::cout << buffer;
	//}


	
	fclose(file);


}