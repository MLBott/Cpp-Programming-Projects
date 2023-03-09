/*
Author: Michael Bottom

This program decrements celsius temp until it equals fahrenheit at the same value.
And then outputs the matching temp.*/


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double fTemp; // Fahrenheit temperature
    int cTemp = 100; // Celsius temperature
    int i; // Counter for the loop
    int matchTemp; // Variable to hold the matching temperature

    // Loop through a range of Celsius temperatures
    for (i = 0; i < 400; i++)
    {
        // Convert the Celsius temperature to Fahrenheit
        fTemp = ((9.0 / 5.0) * double(cTemp)) + 32.0;

        // Check if the Celsius temperature is equal to the Fahrenheit temperature
        if (cTemp == fTemp)
        {
            // If they are equal, print out the matching temperature
            cout << "Matching temperature is: " << fTemp << endl;
        }

        // Decrease the Celsius temperature for the next iteration of the loop
        cTemp = cTemp - 1;
    }

    // End the program
    return 0;
}




