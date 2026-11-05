// November5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<vector> 

auto print2DArray(std::vector<std::vector<std::string>> twoDArray)
{
	//we use a "nested" loop: 

	//"hard-coded" "magic" number: 
	int numberOfRowsInMainFunctionRightNow = 3; //forgot to change this 2!
	int numberOfColumnsInMainFunctionRightNow = 5; 

	std::cout << "The size of the 2D array is: " << twoDArray.size() << std::endl; 
	std::cout << "And the size of the zeroth (first) row in the array is: " << twoDArray[0].size() << std::endl;

	for (int rowNumber = 0; rowNumber < twoDArray.size(); ++rowNumber) //"outer" loop
	{
		//inner loop -> every single outer loop iteration makes this inner loop run MULTIPLE times
		for (int column = 0; column < twoDArray[0].size(); ++column)
		{
			std::cout << twoDArray[rowNumber][column] << " "; //setwidth would be better here
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::vector<std::vector<std::string>> peopleInThisRoom =
	{
		{"Tim",				"Casper",		"Jaleah",				"Alice",	"Bob"}, //first row in this class 
		{"Python person",	"Hirata San",	"Another empty spot",	"Demster",	"Walden"}  //second row in this class
	};

	//how do we print "Tim"? 
	std::cout << peopleInThisRoom[0][0] << std::endl; //this is called a "read" operation 

	//how do we change "Casper" to "something else" //read/write permissions
	peopleInThisRoom[0][1] = "something else"; //writing the data to this memory location 

	//how to print ALL elements in this array? 
	print2DArray(peopleInThisRoom);

}

