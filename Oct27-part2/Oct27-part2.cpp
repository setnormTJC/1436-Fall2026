// Oct27-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
#include<vector> //a list of THINGS (numbers, strings, chars, etc.) that can grow and shrink, as needed

//using namespace std; 

void demoPrintingAListOfGrades()
{
	std::vector<int> listOfGrades =
	{
		9,
		9,
		100, 
		70,
		0,
		46
	};


	for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
	{
		std::cout << listOfGrades[locationInArray] << " "; //9 9 100 70 etc
	}

	std::cout << std::endl; 
}

std::vector<std::string> makeToDoList()
{
	std::vector<std::string> toDoList; //initially make this list empty: 

	std::string continueOrNot = "yes"; 

	while (continueOrNot != "no")
	{
		std::cout << "Enter a thing on your to do list:" << std::endl;

		std::string newTask;
		std::getline(std::cin, newTask);

		toDoList.push_back(newTask);

		std::cout << "do you wanna continue adding items(yes/no" << std::endl;
		std::getline(std::cin, continueOrNot);
	}

	return toDoList; 
}


void printTheList(std::vector<std::string> theList)
{
	for (int index = 0; index < theList.size(); ++index)
	{
		std::cout << "Item number " << index + 1 << " is: " << theList[index] << std::endl; 
	}
}

int main()
{
	//demoPrintingAListOfGrades(); 
	auto toDoList = makeToDoList(); 

	printTheList(toDoList); 

}

