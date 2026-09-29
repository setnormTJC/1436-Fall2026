// Sept29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //iostream includes MANY headers (including stdlib.h)

#include<Windows.h> //gives access to the Sleep function (this is an OS header file)

#include"Functions.h"

using namespace std; 

void demoAFewThings()
{
	int number = 1; 
	int numberSquared; //1^2 = 1

	while (number <= 5)
	{
		numberSquared = pow(number, 2);
		number++; //increment so no infinite loop
	}

	cout << numberSquared << "\n";
	int counter = 1;

	while (counter <= 10)

	{

		cout << "counter value is: " << counter << endl;
		//increment: 
		counter++; 
	}

	char character = 97; //97 is the decimal equivalent of 'a' 

}

int main()
{
	srand(time(0)); //makes a "random seed"

	//snake eyes means both dice roll a 1: 

	int d4Result = -1; //why -1? Because it's a quick and dirty way of guaranteeing the loop executes
	int d20Result = -1; 

	int numberOfDiceRolls = 0; 

	const int NUMBER_OF_EXPERIMENTS = 100; 

	double totalNumberOfRolls = 0; //we need this for averaging 

	for (int i = 0; i < NUMBER_OF_EXPERIMENTS; ++i)
	{
		while (d4Result != 1 || d20Result != 1) //this is called a "nested loop"
		{
			d4Result = rollDice(4);
			d20Result = rollDice(20); 

			//cout << "D4 rolled: " << d4Result << " and D20 rolled: " << d20Result << "\n";

			numberOfDiceRolls++; 
		}

		cout << "It took this many rolls to roll snake eyes: " << numberOfDiceRolls << "\n";
		totalNumberOfRolls = totalNumberOfRolls + numberOfDiceRolls; 
		numberOfDiceRolls = 0;

		//system("pause"); 
		//system("cls"); 

		//reset a couple of variables: 
		d4Result = -1; 
		d20Result = -1; 
	}

	cout << "The AVERAGE number of rolls is: " << totalNumberOfRolls / NUMBER_OF_EXPERIMENTS << "\n";

}