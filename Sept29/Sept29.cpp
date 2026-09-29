// Sept29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //iostream includes MANY headers (including stdlib.h)

#include<Windows.h> //gives access to the Sleep function (this is an OS header file)

using namespace std; 

void demoAFewThings()
{
	int number = 1; 
	int numberSquared; //1^2 = 1

	while (number <= 5)
	{
		numberSquared = pow(number, 2);
		number++; //increment so no infinite loop
	}

	cout << numberSquared << "\n";
	int counter = 1;



	while (counter <= 10)

	{

		cout << "counter value is: " << counter << endl;
		//increment: 
		counter++; 
	}

	char character = 97; //97 is the decimal equivalent of 'a' 

}

int main()
{
	int countdownValue = 10; 

	while (countdownValue > 0)
	{
		//this is the "body" of the loop:
		//countdownValue = countdownValue - 1; //decrement 
		countdownValue--; 

		Sleep(500); 
		
		cout << countdownValue << "...";
		
	}

	system("finalCountdown.wav");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
