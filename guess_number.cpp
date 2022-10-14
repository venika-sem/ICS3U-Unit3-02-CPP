// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program guess the number

#include <iostream>

int main() {
    // this function guesses number
    const int GUESSING_NUMBER = 5;
    int guess;

    // input
    std::cout << "Enter the a number between 0 and 9: ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // process
    if (guess == GUESSING_NUMBER) {
        // output
        std::cout << "Congratulations, you guessed correct!";
    }

    if (guess != GUESSING_NUMBER) {
        // output
        std::cout << "Sorry, you guessed wrong!";
    }

    std::cout << "\nDone." << std::endl;
}
