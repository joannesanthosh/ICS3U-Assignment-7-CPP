// Copyright (c) 2023 Joanne Santhosh
//
// Created by: Joanne Santhosh
// Created on: Jan 2023
// This program identifies the amount of even numbers in a list

#include <time.h>

#include <array>
#include <iostream>
#include <random>

template <size_t N>
int findEvenNumber(std::array<int, N> listOfNumbers) {
    // This function finds the even numbers
    int evenNumber = listOfNumbers[0];

    for (int singleRandomNumber : listOfNumbers) {
        if (singleRandomNumber % 2 == 0) {
            evenNumber += 1;
        }
    }
    return evenNumber;
}

int main() {
    std::array<int, 100> randomNumbers;
    int singleRandomNumber;
    int evenNumber;

    std::cout << "Here is a list of 100 random numbers: " << std::endl;
    std::cout << "" << std::endl;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 50);
    for (int counter = 0; counter < 100; counter++) {
        singleRandomNumber = idist(rgen);
        randomNumbers[counter] = singleRandomNumber;
        std::cout << "The random number " << counter + 1 << " is: "
                  << singleRandomNumber << std::endl;
    }
    // calls function
    evenNumber = findEvenNumber(randomNumbers);
    std::cout << "" << std::endl;
    std::cout << "The number of even numbers are " << evenNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
