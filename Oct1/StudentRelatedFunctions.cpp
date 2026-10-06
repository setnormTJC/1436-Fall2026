#include"StudentRelatedFunctions.h"

#include<fstream>

vector<string> getAllStudentNames(string filename)
{
	ifstream fin(filename); 

	if (fin.is_open() == false) //file not found!
	{

		//hgfhgfhj
		cout << filename << " was not found :(" << endl;
		return {}; //what is this? (an empty array)
	}

	//loop through the file and read in and STORE all names: 
	vector<string> allNames;  //this list will hold all names: 
	string currentName; 
	while (getline(fin, currentName)) //this will get all lines of file
	{
		//cout << currentName << "\n";
		allNames.push_back(currentName);
	}

	fin.close(); //suppose you leave some file open and forget, and a coworker needs that file later on

	return allNames; 
}

string getLongestName(vector<string> names)
{
	//we are about to write out first ALGORITHM! YAYA!

	string currentLargestName = ""; 
	//string secondLongestName

	for (int i = 0; i < names.size(); ++i)
	{
		//if (names[i].length() > currentLargestName.length())
		if (currentLargestName.length() < names[i].length())
		{
			currentLargestName = names[i]; 
		}
	}

	return currentLargestName;
	//return string();//"" (empty string)
}


void demoASimpleArray()
{
	//	string firstItemOnGroceryList = "eggs" ;
	//string secondItemOnGroceryList = "bacon";
	//string thirdItemOnGroceryList = "tuna";

	vector<string> groceryList =
	{
		"eggs",
		"tuna",
		"bacon",
		"tomato"
	};

	groceryList.push_back("figs");
	groceryList.push_back("milk");

	cout << "The size of the grocery list is: " << groceryList.size() << endl;

	//how to print this grocery list? 
	for (int index = 0; index < groceryList.size(); ++index) //preincrement versus postincrement 
		//be WARY of "off by one errors" (ex: <= groceryList.size())
	{
		cout << groceryList[index] << endl; //[] -> the "subscript" operator 
	}
}