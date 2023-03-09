/*
Author: Michael Bottom

This program makes a guess at the Babylonian algorithm square root for a number n.
It asks the user to enter a guess and then iterates through the guess with the 
Balbylonian algorithm and outputs a number with two decimal places.*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    double n = 2575; // Number to find the square root of
    double guess; // Current guess for the square root
    double lastGuess; // Last guess for the square root
    double r; // Ratio of n and the current guess
    double guessClosenessCalc; // Calculation to measure how close the current guess is to the actual square root

    // Ask the user for an initial guess
    cout << "Guess the square root of a number: ";
    cin >> guess;

    // Set the initial guess closeness calculation value
    guessClosenessCalc = 200.0;

    // Loop until the guess is close enough to the actual square root
    while (guessClosenessCalc >= .01 * guess)
    {
        // Calculate the ratio of n and the current guess
        r = n / guess;

        // Save the current guess as the last guess
        lastGuess = guess;

        // Calculate the new guess using the Babylonian method
        guess = (guess + r) / 2.0;

        // Calculate the guess closeness calculation value
        if (lastGuess > guess)
        {
            guessClosenessCalc = (lastGuess - guess) / lastGuess;
        }
        else
        {
            guessClosenessCalc = (guess - lastGuess) / guess;
        }
    }

    // Output the matching guess
    if (guessClosenessCalc <= .01 * guess)
    {
        cout << "The matching guess is: " << guess << endl;
    }

    // End the program
    return 0;
}


