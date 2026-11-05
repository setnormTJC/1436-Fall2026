// Oct29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iomanip> //for set width (setw())
#include <iostream>
#include<queue>
#include <vector>

void printSalesData(std::vector<std::vector<int>> salesData)
{
	//NESTED loop! HOORAY!

	const int WIDEST_COLUMN = 7; //"hard-coded" value determined based on digit counting in main 

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

auto calculateAverageSales(std::vector<std::vector<int>> salesData)
{
	double averageSales = 0.0; 

	//first, add up ALL sales in all rows and columns:
	double sum = 0.0; 
	for (int row = 0; row < salesData.size(); ++row)
	{
		for (int column = 0; column < salesData[0].size(); ++column)
		{
			sum = sum + salesData[row][column]; 
		}
	}

	std::cout << "Sum of all sales is: " << sum << std::endl; 

	//how to divide by the total number of sales? (the number of rows * the number columns)
	int totalDataPoints = salesData.size() * salesData[0].size(); 
	
	averageSales = sum / totalDataPoints; 

	return averageSales; //needs to be modified (somehow)
}

//add a function that calculates max value in a certain row or column
int findMaxSalesInCertainRow(std::vector<std::vector<int>> salesData, int rowNumber)
{
	//INT_MIN//a "macro"
	int maxSalesInCertainRow = 0; //note that INT_MIN might be preferable here 
	for (int column = 0; column < salesData[0].size(); ++column)
	{
		int currentSales = salesData[rowNumber][column]; 

		if (currentSales > maxSalesInCertainRow)
		{
			maxSalesInCertainRow = currentSales;

			std::cout << "Updated the max sale to: " << maxSalesInCertainRow << std::endl; 
		}
	}

	return maxSalesInCertainRow; 
}

int main()
{

	std::priority_queue<int> queue; 

	//xox
	//oxo
	//xoo

	std::vector<std::vector<int>> salesData =
	{
		//Jan.	//Feb.	//March
		{1,		2,		3},//Alice's sales data (she sold 1 dollar worth of stuff in Jan.)
		{4,		55,		6}, //Bob
		{7,		8,		9}, //Carol
		{10,	11,		12}//Darth (Vader)
	};

	int maxSalesInRow1 = findMaxSalesInCertainRow(salesData, 1); 

	std::cout << "Max sales in Row 1 is: " << maxSalesInRow1 << std::endl; 

	//printSalesData(salesData);
	////dimensions of this array (also called a MATRIX) are 4 x 3 (4 ROWS and 3 COLUMNS)


	////Can we write a function that determines the AVERAGE sales per month? 
	//double averageSales = calculateAverageSales(salesData); 

	//std::cout << "Average is: " << averageSales << std::endl; 

	//std::vector<std::vector<char>> ticTacToeGrid(3, std::vector<char>(3)); 

}
