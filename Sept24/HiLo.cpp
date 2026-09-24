#include"HiLo.h" //why? Because

#include<iostream> //overkill

using namespace std; 

int getRandomNumberBetween1AndN(int N)
{
	//this is the BODY (or definition) of the function: 

	srand(time(0)); //what does this do? It generates a "random seed"
	//what does that mean? It's complicated

	int randomNumber = (rand() % N) + 1;

	return randomNumber;

}//end of the getRandomNumberBetween1AndN function 

int getUserGuess()
{
	cout << "Enter your guess:\n";
	int userGuess; //variable decalaration (not assigning a value to it since we IMMEDIATELY read in)
	cin >> userGuess; 
	//getline(); 

	//requires converting to an integer with stoi

	return userGuess; 

}