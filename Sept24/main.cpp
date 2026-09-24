// Sept24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"HiLo.h" //why double quotes "" and not angle brackets <>
					//just drive the car 

using namespace std; 

int main()
{
	//first, generate a random number
	constexpr int N = 100; //const means "constant"  (N as in "number")
	//N = 123; //leads to a syntax error because we used constant expression "modifier"

	int randomNumber = getRandomNumberBetween1AndN(N);
	//then, prompt the user for guesses WHILE guess != randomNumber

	cout << "The random number to guess is: " << randomNumber << "\n";

	//the game loop!

	//then, output the number of guesses it took 
	// (should the player LOSE if too many guesses?)
}

