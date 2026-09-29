#include"Functions.h"

#include<iostream>  //gives access to srand

#include<Windows.h>

using namespace std; 

int rollDice(int numberOfSidesOnDice)
{

	int whatTheDiceRolled = (rand() % numberOfSidesOnDice) + 1; 

	return whatTheDiceRolled; 

}

void playTheFinalCountdown()
{
	int countdownValue = 10;

	while (countdownValue > 0)
	{
		//this is the "body" of the loop:
		//countdownValue = countdownValue - 1; //decrement 
		countdownValue--;

		Sleep(500);

		cout << countdownValue << "...";

	}

	system("finalCountdown.wav");
}
