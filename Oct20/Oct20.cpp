// Oct20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//using namespace std;

int main()
{
	while (true)
	{
		//int a = 123; //demonstrating indentation 
		//prompt 
		std::cout << "Enter a shape type (only rectangle, circle, and cylinder are handled here):" << std::endl;

		std::string shape; //concise variable name (verbose would be theShapesName) 
		std::cin >> shape; //getline can be used here instead

		if (shape == "rectangle" || shape == "Rectangle")
		{
			float length; //variable declaration 
			float width = 0.0f; //variable initialization

			std::cout << "Enter the length AND the width" << std::endl;
			std::cin >> length >> width;

			float area = length * width;

			std::cout << "The area is: " << area << std::endl;
		}

		else if (shape == "circle")
		{
			float radius = 0.0f;

			//float area = ...
			std::cout << "The area is: " << 3.14 * radius * radius << std::endl;

		}

		else if (shape == "cylinder")
		{
			float radius = 0.0f;
			std::cout << "The volume of the cylinder is BLAH" << std::endl;
		}

		else
		{
			std::cout << "Unrecognized shape - try again?" << std::endl;
		}

		//radius = 132; //not in scope! this will throw an error!

	}
	

}

