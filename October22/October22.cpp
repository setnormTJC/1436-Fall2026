//this program prompts the user for their birth date (in mm, dd, yyyy format)
//and it displays the user's age:

#include <iostream>
#include<map> //this is a "data structure" 



//first approximation check -> this does NOT handle problematic dates such as November 31st or February 29 (leap year stuff)
bool isValidDate(int day, int month, int year)
{
	if (month < 1 || month > 12)
	{
		std::cout << "The month " << month << " is not valid (because it is NOT betwixt 1 and 12" << std::endl; 
		return false; 
	}


	int minimumPossibleDay = 1; 
	int maximumPossibleDay = 31;

	if (day < minimumPossibleDay || day > maximumPossibleDay)
	{
		std::cout << "The DAY" << day << " is not valid (because it is NOT betwixt "
			<< minimumPossibleDay << " and " << maximumPossibleDay 
			<< std::endl;

		return false; 
	}

	if (year < 1909 || year > 2026) //no time machines allowed!
	{
		std::cout << "Year " << year << " is invalid (AKA: not between 1909 and 2026) " << std::endl;
		return false; 
	}

	return true; 
	//std::map<std::string, int> monthsToDays =
	//{
	//	{"January", 31 },
	//	{"February", 28}, //75% of the time  
	//	//{basdlfafdhadfh}
	//};

}

int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear)
{
	int age = 0; 
	

	//insert Logic (calculations)
 

	if (currentMonth > birthMonth)
	{
		if (currentDay > birthDay)
		{
			age = currentYear - birthYear - 1; 
		}
	}

	else
	{
		age = currentYear - birthYear;
	}

	return age; 


}



//using namespace std; 

int main()
{	
	//first,get the user's birth date: 
	//std::string birthDate = "January 1, 1990";

	int birthDay = 0, birthMonth = 0, birthYear = 0;
	
	while (isValidDate(birthDay, birthMonth, birthYear) == false) 
	{
		//prompt the user to enter their birthdate until a valid date is obtained
		std::cout << "Enter your birth day (ex: 5 if it is the 5th day of March):" << std::endl;
		std::cin >> birthDay;

		std::cout << "Enter your birth month (ex: 10 if October, 1 if January, etc.):" << std::endl;
		std::cin >> birthMonth;

		std::cout << "Enter your birth year (ex: 1988, 2006): " << std::endl;
		std::cin >> birthYear;
	}

	//a valid date has been obtained, let's now calculate age:

	//let's be lazy for today and just set the current date to the following: 
	int currentDay = 22;
	int currentMonth = 10;
	int currentYear = 2026;


	int age = calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear); 
	std::cout << "Your age is: " << age << std::endl; 

	
}

