// October20-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<vector> //if student wants to keep track of ALL chars entered

int main()
{
	//Part 1:
	std::cout << "Enter a character ('a', '$', etc.):" << std::endl;

	char userInput;

	//std::vector<char> allCharacters; 

	std::cin >> userInput;
	//allCharacters.push_back(userInput); 

	int numberOfCharacters = 1; 
	while (userInput != 'q') //anybody?
	{
		//"body" of the loop:
		std::cout << "Enter ANOTHER character (q to quit):" << std::endl; 
		std::cin >> userInput; 
		numberOfCharacters++; //adds one (1) to the number of characters
	} //end while 

	std::cout << "You entered this many characters total: "
		<< numberOfCharacters << std::endl; 

	std::cout << "The final character you entered was: "
		<< userInput << std::endl; 

	//Part 2: 
	//std::cout << "abcdefghi"

	for (char currentLetter = 'a'; currentLetter <= 'z'; currentLetter++)
	{
		std::cout << currentLetter << std::endl; 
	}

	//SetConsoleOutputCP(CP_UTF8);

	////SetConsoleOutpCP(); //
	//for (int i = 0; i <= 11'125; ++i) //125 corresponds to the close brace } symbol
	//{
	//	std::cout << (char)i << " "; //"typecasting" (think Arnold Schwarzenegger)
	//}



	//std::cout << "a" << std::endl; 
	//std::cout << "b" << std::endl;
	//std::cout << "c" << std::endl;

	//for (piece1; piece2; piece3)

}//end main 
