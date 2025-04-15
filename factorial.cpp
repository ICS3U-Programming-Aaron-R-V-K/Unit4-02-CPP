// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 14, 2025
// It is a do...while program
// It calculates the factorial from the user input

#include <iostream>
#include <string>

int main() {
    // Get user number as a string
    std::string userNumStr;
    std::cout << "Enter a whole number: ";
    std::cin >> userNumStr;
    // Define variables
    float numFloat;
    int number;

    // this function calculates the factorial of a number
    int counter = 0;
    int product = 1;

    try {
        // Convert the string to a float
        numFloat = std::stof(userNumStr);
        // Converts the string to an integer
        number = std::stoi(userNumStr);

        // if != statement comparing the numFloat and number
        // to validate that is a integer
        if (numFloat != number) {
            std::cout << "\nYour has decimals" << std::endl;

        // check if input is a whole number (non-negative)
        } else if (number < 0) {
            std::cout << "\nInvalid input. Enter a positive whole number."
            << std::endl;

        // Else statement if the number it is an integer and not a float
        } else {
        // do..while loop to do the factorial
        do {
            // Each time the program runs
            // until it reaches the user number it will do this calculations
            // Add one to the counter so it goes 1,2,3...
            counter = counter + 1;
            // multiplies all does numbers and then changes the product value
            product = product * counter;
        } while (counter < number);

        // output when it meets the requirements
        std::cout << "\nThe factorial of " << number <<
        " is " << product << "." << std::endl;
        }

    std::cout << "\nDone." << std::endl;

    // Catch statement for invalid input
    } catch (...) {
        // Error handling for invalid input (non-integer input)
        std::cout << "Error: Invalid input. Please enter a valid integer."
                  << std::endl;
    }
    return 0;
}
