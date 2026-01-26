#include <iostream>
#include "CPlayer.h"


#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


int main()
{

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	Player player1;
	player1.SetX(5);// = 5;
	player1.SetY(2);// = 2;
	player1.SetSpeed(10);// = 10;

	player1.Move( 20, 10);

	//Èü
	Player* player2 = new Player("leesh");
	player2->Move(3, 1);

	

	Player** player3 = &player2;
	(*player3)->Move(3, 1);
	(*(*player3)).Move(3, 1);



	delete player2;
	player2 = nullptr;

	std::cin.get();
}