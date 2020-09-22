#include "testing.hpp"
#include <string>
#include <iostream>

int main()
{
    std::cout << "Please enter in a string: ";
    std::string toTest;
    std::getline(std::cin, toTest);
    std::string result = firstLetters(toTest);
    std::cout << "Org input: " + toTest + "\nFirst letters of your input: " + result << std::endl;
    return 0;
}