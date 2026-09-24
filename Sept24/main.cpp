// Sept24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"HiLo.h" //why double quotes "" and not angle brackets <>
					//just drive the car 

using namespace std; 

int main()
{
	//first, generate a random number
	constexpr int N = 1000; //const means "constant"  (N as in "number")
	//N = 123; //leads to a syntax error because we used constant expression "modifier"

	int randomNumber = getRandomNumberBetween1AndN(N);
	//then, prompt the user for guesses WHILE guess != randomNumber

	//cout << "The random number to guess is: " << randomNumber << "\n"; //cheat!

	int userGuess = -999; //-999 because we know that the random number > 0
	//the game loop!
	
	//loss condition -> allow only a max number of guesses
	constexpr int MAX_NUMBER_OF_GUESSES = 11;//snake_case; SCREAMING_SNAKE_CASE
	int numberOfGuesses = 0; 

	while ((userGuess != randomNumber) 
		&&
		(numberOfGuesses < MAX_NUMBER_OF_GUESSES))
	{
		userGuess = getUserGuess(); 

		//the game logic (the fun stuff)

		if (userGuess > randomNumber)
		{
			cout << "Your guess was too HIGH\n";
		}
		
		else if (userGuess < randomNumber)
		{
			cout << "Your guess was too LOW\n";
		}

		else //userGuess == randomNumber
		{
			cout << "Correctamundo (Pulp Fiction reference)\n";
		}

		numberOfGuesses = numberOfGuesses + 1; 
		//numberOfGuesses++; 
		cout << "You have guessed this many times: " << numberOfGuesses << "\n";
		cout << "\033[31m"; //weird code for making terminal text red
		cout << "This many guesses remaining: " << MAX_NUMBER_OF_GUESSES - numberOfGuesses << "\n";
		cout << "\033[0m"; //resets terminal text color back to default

		system("pause"); 
		system("cls"); 

	} //end while loop

	if (userGuess != randomNumber)
	{
		cout << "You LOST! The number was: " << randomNumber << "\n";
	}


}//end main

