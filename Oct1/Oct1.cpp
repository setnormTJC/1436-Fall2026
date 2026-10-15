// Oct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"StudentRelatedFunctions.h" //why double quotes and not angle brackets (let's talk about it 1 on 1) 

#include <iostream>
#include<vector> 

using namespace std; 

void printListOfNumbers(vector<int> numbers)
{
	cout << "Size of numbers is: " << numbers.size() << "\n";

	//counterpart 
	//numbers.at()
	//cout << "The FIRST? element (thing in the list) is: " << numbers[0] << "\n";
	
	//this is how you print the entire list of numbers (which is the input to this function)
	for (int index = 0; index < numbers.size(); index++)
	{
		cout << numbers[index] << endl; //put characters OUT to the terminal
	}
}

int main()
{
	//numbers is a "local variable"
	vector<int> numbers =
	{
		121, 22, 33, 44, 55, 66, 9494
	};


	//5 * 6 //binary operator
	//cout << "The BEGIN function returns (if you use ._ptr (pointer)): " << numbers.begin() << "\n";

	//cout << "Dereferencing the begin function yields: " << *numbers.begin() << endl;
	
	//numbers.pop_back();

	//numbers.erase(numbers.end() - 2);

	printListOfNumbers(numbers);
	


	vector<string> allStudentNames = getAllStudentNames("studentRoster.csv");

	//for (int i = 0; i < allStudentNames.size(); ++i) //i = index
	//{
	//	cout << allStudentNames[i] << endl; 
	//}

	//cout << "Longest name in list is: " << getLongestName(allStudentNames) << endl;

} //end main 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
