// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program adds all the integers between one and a number

#include <iostream>
#include <string>

int main() {
    // This function adds numbers

    int number;
    int loopCounter = 0;
    std::string numberAsString;
    int answer = 0;

    // Input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberAsString;

    // Process & Output
    try {
        number = std::stoi(numberAsString);
        if (number < 0) {
            std::cout << number << " is not positive :c" << std::endl;
        } else {
            while (loopCounter < number) {
                loopCounter = loopCounter + 1;
                answer = answer + loopCounter;
            }
            std::cout << "The sum of all the numbers between 0 and "
            << number << " is " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not a number." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
