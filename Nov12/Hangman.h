#pragma once

#include<string> 
#include<vector> 

//using namespace std; 

std::vector<std::string> getAllDictionaryWords(std::string filename); 

std::string pickRandomWord(std::vector<std::string> words);

/// <summary>/// Note that this function will call other, helper functions /// </summary>
void playHangman(); 

