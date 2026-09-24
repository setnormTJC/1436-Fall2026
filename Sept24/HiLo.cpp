#include"HiLo.h" //why? Because

#include<iostream> //overkill

int getRandomNumberBetween1AndN(int N)
{
	srand(time(0)); //what does this do? It generates a "random seed"
	//what does that mean? It's complicated
	
	int randomNumber = (rand() % N) + 1; 

	return randomNumber; 

}