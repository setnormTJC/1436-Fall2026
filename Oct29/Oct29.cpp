// Oct29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iomanip> //for set width (setw())
#include <iostream>
#include <vector>

void printSalesData(std::vector<std::vector<int>> salesData)
{
	//NESTED loop! HOORAY!

	const int WIDEST_COLUMN = 7; 

	for (int row = 0; row < salesData.size(); ++row)
	{
		for (int column = 0; column < salesData[0].size(); ++column) //CRAZY!
		{
			std::cout << std::setw(WIDEST_COLUMN);
			std::cout << std::left; //left align
			std::cout << salesData[row][column];
		}
		std::cout << std::endl;
	}
}

int main()
{
	//xox
	//oxo
	//xoo

	std::vector<std::vector<int>> salesData =
	{
		{1,		2,		311},
		{4,		584848, 6}, 
		{7,		8,		9}, 
		{10,	11,		12}
	};

	printSalesData(salesData);
	//dimensions of this array (also called a MATRIX) are 4 x 3 (4 ROWS and 3 COLUMNS)

	//std::vector<std::vector<char>> ticTacToeGrid(3, std::vector<char>(3)); 

}
