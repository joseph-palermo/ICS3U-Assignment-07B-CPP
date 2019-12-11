// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: December 2019
// This program prints odd numbers in a range

#include <iostream>


int OddNumber(int xValueList, int yValueList) {
    // this function processes if a number is odd and outputs it
    int numberInteger = 1;
    int zValueList;
    int oddNumber;

    // process & output
    zValueList = xValueList*yValueList;
    std::cout << "\n" "Odd Numbers from 1 to " << zValueList << "\n";
    while (numberInteger <= zValueList) {
        if (numberInteger %2 != 0) {
            std::cout << "" "\n" << numberInteger;
        }
        numberInteger++;
    }
    return oddNumber;
}


int main() {
    // this function asks the user for values and calls a function

    // variables
    int numberInteger = 1;
    int xValue;
    int yValue;

    // input
    std::cout << "This program will take the value of x and multiply it by y,\n"
    "  then find the odd numbers from 1 to z. ";
    try {
        std::cout << "\n\n" << "Enter the positive integer value of x: ";
        std::cin >> xValue;
        std::cout << "\n" << "Enter the positive integer value of y: ";
        std::cin >> yValue;
    } catch (std::invalid_argument) {
            std::cout << "Please insert a valid integer";
    }
    // calling a function
    int(outputOdd) = OddNumber(xValue, yValue);
}
