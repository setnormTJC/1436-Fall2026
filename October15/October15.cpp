// October15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iomanip> //for setprecision 
#include <iostream>
#include<string>
#include <vector>

using namespace std; 

int main()
{

    //std::vector<int> nums = { 1, 2, 3 }; 

    //nums.clear(); 
    //auto cost = 1.23f; 
    //auto letter = 'a'; 
    //auto number = 12; 

    float costPerGallon = 3.80f;//making this NON-const gives the freedom to prompt the user for THEIR cost

    float costToFillUp = 0.0f;//expect USD 1.99 (not 2)

    float numberOfGallonsInTank = 0.0f;// ex = 18; //Toyota Sienna 

    while (numberOfGallonsInTank <= 0)
    {
        std::cout << "How many gallons of gas does your car hold?" << std::endl; 
        std::cin >> numberOfGallonsInTank; 
    }

    costToFillUp = costPerGallon * numberOfGallonsInTank; //ex: 10 gallons cost about 38 dollars

    std::cout << fixed << setprecision(2); //display a FIXED number of digits (2 -> $1.99) after decimal
    std::cout << "It costs you " << costToFillUp
        << " to fill up your tank" << std::endl; 

    int mpg = 10; 

    int numberOfMilesOnFullTank = numberOfGallonsInTank * mpg;

    std::cout << "The number miles you can go on a full tank is: " << numberOfMilesOnFullTank << std::endl;
    ////const int DOZEN = 12; //variable that cannot ... vary
    //////DOZEN = 13; 

    ////const int NUMBER_OF_FEET_PER_MILE = 5280; //named constant

    ////std::cout << "How many MILES is it from TJC to your house?" << std::endl; 
    ////int numberOfMiles;  //"should" this be a float? 
    ////std::cin >> numberOfMiles;
    //////getline(cin, )  //... requires conversion of a string to an int in this (stoi())

    //////std::cout << "The number of items in a dozen is: " << DOZEN << std::endl;
    ////std::cout << "That is this many feet: " << numberOfMiles * NUMBER_OF_FEET_PER_MILE << std::endl; 
    //int totalInches; //variable declaration
    //std::cout << "Enter your height, in inches (NOT feet inches): " << std::endl; 
    //std::cin >> totalInches; 

    //const int NUMBER_OF_INCHES_PER_FOOT = 12; 
    //std::cout << totalInches << " is equal to " << totalInches / NUMBER_OF_INCHES_PER_FOOT << " feet " <<std::endl;


    //std::cout << " and " << totalInches % NUMBER_OF_INCHES_PER_FOOT << " inches" << std::endl; 

    //int postLikeCount = 0; 
    //std::cout << "Current number of likes of some photo of me with cat ears is: " << postLikeCount << std::endl; 

    ////suppose TEN people liked the photo:
    //postLikeCount+= 10;

    //std::cout << "After incrementing, the number of likes is: " << postLikeCount << std::endl;


    //int firstNumber = 5; 
    //int secondNumber = 3; 

    //int product; 

    //
    ////firstNumber* secondNumber = product; //no! the variable MUST be on the LEFT side of the assignment operator (=)
    //product = firstNumber * secondNumber; 

    //int someNumber = 0; //declared, but NOT INITIALIZED (bad to leave a variable uninitialized -> 

    //someNumber = someNumber * 2; 
    //

}
