// Oct27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>//gives access to a "reverse" function 
#include <iostream>
#include<string> 

std::string getUserInput()
{
	std::string userInput; //a string is an ARRAY of characters (general arrays can be lists of ANY data type)

	//no mixed data types in an array 
	//1,'a', "alpha"

	//what goes here? 
	//prompt: 
	std::cout << "Enter a string (word, sentence, phrase, whatever)" << std::endl; 
	//std::cin >> userInput; //suppose user enters "able was i ere i saw ebla" (only "able" will be stored)
	std::getline(std::cin, userInput);

	return userInput; 
}

bool isPalindrome(std::string input)
{
	std::string copyOfInput = input; 

	//for (int ...)
	std::reverse(input.begin(), input.end());

	return (copyOfInput == input); 

	//alternative approach below: 
	//if (copyOfInput == input)
	//{
	//	return true; 
	//}

	//else
	//{
	//	return false; 
	//}
	
}

int main()
{
	while (true)//allows for "easy" infinite testing of
		//palindrome checking
	{
		std::string userInput = getUserInput(); 

		if (isPalindrome(userInput))
		{
			std::cout << "\033[0m";
			std::cout << "That IS a palindrome" << std::endl; 
		}

		else
		{
			std::cout << "\033[35m";
			std::cout << "That is NOT a palindrome :(" << std::endl; 
		}
	}
}

