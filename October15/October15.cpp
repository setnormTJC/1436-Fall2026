

#include <iostream>
#include <string>

int main()
{

	float sum = 1.23 + 4.56 + 7.89; 

	std::cout << sum << std::endl; 


	//const int DOZEN = 12;

	//const int NUMBER_OF_FEET_PER_MILE = 5280;

	//std::cout << "How many MILES is it from TJC to your house?\n";
	//int numberOfMiles; //should this be a float?
	//std::cin >> numberOfMiles;
	//std::cout << "That is that many feet: " << numberOfMiles * NUMBER_OF_FEET_PER_MILE << std::endl;

	int totalInches = 13; //inches (feet)/ //variable declaration
	int userHeightInches = 62;
	std::cout << "Enter your height in inches (not in feet, inches):\n";
	std::cin >> userHeightInches; 

	if (userHeightInches <= 62)  
	{
		std::cout << "Please grow a little more.\n";

	}

	const int NUMBER_OF_INCHES_PER_FOOT = 12;
	std::cout << userHeightInches << "is equal to " << userHeightInches / NUMBER_OF_INCHES_PER_FOOT << " feet "<< std::endl;
	std::cout << " and " << userHeightInches % NUMBER_OF_INCHES_PER_FOOT << " inches " << std::endl;

	return 0;

}