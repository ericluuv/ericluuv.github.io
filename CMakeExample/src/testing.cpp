#include "testing.hpp"
#include <string>
#include <iostream>

std::string firstLetters(const std::string &str)
{
    //Gets the first letter of every word in a string.
    std::string toReturn;
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 or str[i - 1] == ' ') 
        { 
            toReturn += str[i]; 
        }
    }
    return toReturn;
}