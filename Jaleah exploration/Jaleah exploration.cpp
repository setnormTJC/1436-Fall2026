#include<iostream>
#include<algorithm>
#include<string>
//gives access to a reverse function

std::string getUserInput()
{
	std::string userInput;

	std::cout << "Enter a string (word, senetence, phrase, whatever) - this program will determine if the word is a palindrome" 
		<< std::endl;
	//std::cin >> userInput; use getline. It ain't gon read everything, only "able" (isn't -> is not") 
	std::getline(std::cin, userInput);

	return userInput;

}

bool isPalindrome(std::string input)
{

	std::string copyOfInput = input;
	//for (int...)
	std::reverse(input.begin(), input.end());

	return (copyOfInput == input); //this will be either true or false

}




int main()
{
	while (true)
	{
		std::string userInput = getUserInput();
		if (isPalindrome(userInput))
		{
			std::cout << "That is a palindrome" << std::endl;

		}

		else 
		{
			std::cout << "NOT a palindrome (like hannah is)" << std::endl; 
		}

		std::system("pause"); 
		std::system("cls"); //clear screen

	}
}

