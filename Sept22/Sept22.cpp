// Sept22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include<string> 

#include<Windows.h> //has the "Sleep" function (pause)

using namespace std; 

int main()
{
	int dayCount = 32;

	while (dayCount < 30);
	{
		cout << "Exercise.";
		dayCount = dayCount + 3;
		//sets reminder to exercise every 3 days for a month
	}


	//let's read in a lexicon (dictionary file)

	//cout << "Enter the filename you want to display the contents of:\n";
	string filename = "dictionary.txt"; //a relative filepath - this initializes the variable's value to "dictionary.txt"
	
	//changed our minds and want a DIFFERENT text file now: 
	filename = "C://Users//Work//Desktop//touch.txt";//"absolute filepath (starts at the C drive (on Windows OS))

	//getline(cin, filename); 

	ifstream fin(filename);

	if (!fin.is_open())
	{
		cout << "Unable to find the file named: " << filename << "\n";
		return -2; //-2 is an "arbitrary" error code (like HTTP 404 page not found)

		//early return - don't go down to line 22, 23, etc. because that is a waste of time
	}


	string currentWordInDictionary; 

	//for (int currentLineNumber = 1; currentLineNumber <= 10; currentLineNumber = currentLineNumber + 1)
	for (int currentLineNumber = 1; currentLineNumber <= 20; currentLineNumber++)
	{
		//display ONLY lines 10 through 20
		getline(fin, currentWordInDictionary);

		if (currentLineNumber > 10)
		{
			cout << currentWordInDictionary << "\n";
		}
	}


	//int currentNumberOfWords = 1; 

	//int numberOfMillisecondsToPauseFor = 2'000; 

	//read in the first TEN (10) lines of Daft Punk's song called "Touch": 
	


	//while (getline(fin, currentWordInDictionary)) //gets ALL words in dictionary
	//{
	//	cout << currentWordInDictionary << "\n";
	//	currentNumberOfWords = currentNumberOfWords + 1; 

	//	if (currentNumberOfWords % 5 == 0) //what do it do? 
	//	{
	//		Sleep(numberOfMillisecondsToPauseFor); //pause for a certain amount of time
	//	}
	//}


}

