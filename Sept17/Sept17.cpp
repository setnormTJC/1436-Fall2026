// Sept17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>

using namespace std; 

//namespace MySpace
//{
//	int a = 123; 
//}
//
//using namespace MySpace; 


void demoSomeIfStatements()
{

	string timeOfDay = "night";
	string weatherCondition = "clear skies";

	int speed = 70;

	if (timeOfDay == "night" and weatherCondition == "rainy")
	{
		speed = speed - 5;
	}

	else
	{
		speed = speed; //maintain current speed 
	}


	//switch:

	//while loop: 


	//cout << a << "\n";

	//comparing one thing to another
	//string correctPassword = "123456"; 
	//string guessedPassword = "abcdef";

	//if (correctPassword != guessedPassword)
	//{
	//	cout << "Wrong password - try again\n";

	//	getline(cin, guessedPassword)
	//}
	//

	//bool qualifiesForSeniorCitizenDiscount = false; 
	//Boole is a mathematician's name
	//bool is a type of data whose allowed values are: 
	//true and false (1 or 0)

	//int age = 65;

	//if (age > 55)
	//{
	//	qualifiesForSeniorCitizenDiscount = true;
	//	cout << "This is one perk of getting older\n";
	//}

	//int numericalGrade = 79; 
	//if (numericalGrade >= 90)
	//{
	//	cout << "Your letter grade is an A\n";
	//}

	//else if (numericalGrade >= 80)
	//{
	//	cout << "B\n";
	//}

	//else //this means numericalGrade < 80
	//{
	//	cout << "Grade is below a B (either C, D, F)\n";
	//}
}

int main()
{
	int numberOfStudentsInThisRoom = 5; 
	
	int currentStudentNumber = 1; 

	while (currentStudentNumber < numberOfStudentsInThisRoom)//;//no!
	{
		//ask them for their name: 
		cout << "Enter your name, student number " << currentStudentNumber << ":\n";
		string currentStudentName;
		getline(cin, currentStudentName);
		cout << "Hello, " << currentStudentName << "\n";

		currentStudentNumber = currentStudentNumber + 1; 
	}


	while (true)
	{
		cout << "What do you want to do? Options are 1, 2, 3:\n";

		cout << "1 - Show video of cat\n";
		cout << "2 - Play a song\n";
		cout << "3 - Show a picture of a dog\n";

		int userChoice;
		cin >> userChoice; //NOT using getline here because cin >> is simpler and does just fine in this case

		cout << "You chose option = " << userChoice << "\n";

		switch (userChoice)
		{
		case 1: //if (userChoice == 1)
			//open a cat video file: 
			system("prayKitty.mp4");
			break; 

		case 2: //else if (userChoice == 2)
			//open a music video file: 
			system("start https://www.youtube.com/watch?v=GR3Liudev18");
			break;

		case 3: //else if (userChoice == 3)
			system("doris.jpg"); 
			break; 

		//else (catch all other inputs)
		default: 
			cout << "You entered an unhandled input\n";
			break;
		}


		system("pause");//forces user to press enter before going back to line 
		system("cls"); //clears screen

	}



}

