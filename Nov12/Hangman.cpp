#include"Hangman.h"

#include<fstream> //for std::ifstream
#include<iostream> 
#include<random> 

//std::vector<std::string> getAllDictionaryWor

std::vector<std::string> getAllDictionaryWords(std::string filename)
{
	std::vector<std::string> words;  //empty at the moment

	//fill it! (using the input file -> filename) 
	std::ifstream fin(filename);

	//safety check -> make sure the file exists!
	if (fin.is_open() == false)
	{
		std::cout << "Could not find the file " << filename << std::endl; 
		return {}; //empty array -> go no further 
	}

	//fill up the words -> using a WHILE loop and getline
	std::string currentWord; 

	while (std::getline(fin, currentWord))
	{
		words.push_back(currentWord);
	}

	std::cout << "The number of words is: " << words.size() << std::endl;
	
	return words; 
	//return (); //what is this? {}
}

std::string pickRandomWord(std::vector<std::string> words)
{
	std::string randomWord; 
	//srand(time(0)); 
	//rand()
	
	std::mt19937 rng(std::random_device{}()); //why!? because it works

	std::uniform_int_distribution<int> distribution(0, words.size() - 1); 

	int randomIndex = distribution(rng); 

	randomWord = words[randomIndex];

	//mt -> Mersenne Twister engine (rng) -> 19937 is a PRIME number 


	return randomWord; 
}

void findAndReplace(std::string wordToGuess, std::string& placeholder, char characterToSearchFor)
{
	for (int location = 0; location < wordToGuess.size(); ++location)
	{
		if (wordToGuess[location] == characterToSearchFor)
		{
			std::cout << "Correctamundo!" << std::endl; 
			placeholder[location] = characterToSearchFor; 
		}

		else
		{
			std::cout << "The character " << characterToSearchFor << " was not found" << std::endl; 
		}
	}

	std::cout << "The updated placeholder is: " << placeholder << std::endl; 

}

std::string generatePlaceholder(std::string wordToGuess)
{
	std::string placeholder; 

	for (int i = 0; i < wordToGuess.size(); ++i)
	{
		placeholder.push_back('*');
	}

	return placeholder; 
}



void playHangman()
{
	//first, get all dictionary words (OR - add a second player who you prompt for the word to guess)
	std::string absoluteFilepath = "C://Users//Work//Downloads//popular.txt";//prepend
	std::vector<std::string> dictionaryWords = getAllDictionaryWords(absoluteFilepath);

	std::string wordToGuess = pickRandomWord(dictionaryWords); 
	std::string placeholder = generatePlaceholder(wordToGuess); 


	//std::cout << "If you are a CHEATER, here is the word: " << wordToGuess << std::endl; 
	std::cout << "The word to guess is: " << placeholder << std::endl; 

	int maxGuessesAllowed = placeholder.size(); 

	int currentNumberOfGuesses = 0; 

	//start the game loop (which runs until the user has guessed all characters of the wordToGuess)
	while (placeholder != wordToGuess && currentNumberOfGuesses < maxGuessesAllowed)
	{
		//prompt for guessedCharacter and inform the user if the letter is in the word or not
		char guessedCharacter; 
		std::cout << "Guess a letter: " << std::endl; 
		//std::getline //this might not be well-suited to hangman
		std::cin >> guessedCharacter; // this operator, >>, is the "input operator" (stream EXTRACTION operator)
		currentNumberOfGuesses++; 

		//check if the character is in the string: 
		findAndReplace(wordToGuess, placeholder, guessedCharacter);
		
	}

	if (currentNumberOfGuesses == maxGuessesAllowed)
	{
		std::cout << "You loser" << std::endl; 
	}
}

