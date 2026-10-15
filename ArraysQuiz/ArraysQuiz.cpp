// ArraysQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector> 

int main()
{

    std::vector<int> nums = { 1 };

    nums.push_back(222); 

    long long counter = 0; //long long is 8 Bytes and overflows at (2^63)-1

    //while (counter < 100'000'000'000'000) //100 * 4 TB 
    //{
    //    nums.push_back(counter); 
    //    counter++; 
    //}

    int bigBoy[1'000]; //this is "hiding" a pointer (it's a pointer in disguise) std::vector
    bigBoy[0] = 97; 

    while (true)
    {
        int* i = new int; 
        //intentionally omit delete i to demo catastrophic memory leak
    }

    //ArrayList
    std::string theAirplane = "Cessna 150"; //single value

    std::string airplanes[3] =
    {
        "Cessna 172",
        "Mooney M20R"
        //what is here? 
    };
    std::cout << airplanes[2] << std::endl; //endl is similar to \n


    //std::cout << "Hello World!\n";
    //std::string
}

