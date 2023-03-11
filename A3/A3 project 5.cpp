/*
Author: Michael Bottom

This program asks the user for their height, weight and age and then calculates the
user's hat size, jacket size, and waist size using appropriate algorithms and outputs
it to the console. Separate functions are used for each output measurement.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function for calculating hat size
double calculateHatSize(double Weight, double Height)
{
    // Calculate hat size using the formula (weight / height) * 2.9
    double formulaHatSize = ((Weight / Height) * 2.9);
    return formulaHatSize;
}

// Function for calculating jacket size
double calculateJacketSize(double userWeight, double userHeight, double userAge)
{
    // Initialize ageAdjustJacket variable
    double ageAdjustJacket = 0;
    
    // If user age is over 30, calculate the age adjustment
    if (userAge > 30)
    {
        ageAdjustJacket = (1 / 8 * (userAge - 30));
    }
    else
    {
        ageAdjustJacket = 0.0;
    }
    
    // Calculate jacket size using the formula ((height * weight) / 288) + ageAdjustJacket
    double formulaJacketSize = (((userHeight * userWeight) / 288) + (ageAdjustJacket));
    return formulaJacketSize;
}

// Function for calculating waist size
double calculateWaistSize(double userWeight, double userAge)
{
    // Initialize ageAdjustWaist variable
    double ageAdjustWaist = 0;
    
    // If user age is over 29, calculate the age adjustment
    if (userAge > 29)
    {
        ageAdjustWaist = (1 / 10 * ((userAge - 28) / 2));
    }
    else
    {
        ageAdjustWaist = 0.0;
    }
    
    // Calculate waist size using the formula (weight / 5.7) + ageAdjustWaist
    double formulaWaistSize = (((userWeight / 5.7) + (ageAdjustWaist)));
    return formulaWaistSize;
}

// Main function
int main()
{
    // Initialize variables
    double hatSize = 0;
    double jacketSize = 0;
    double waistSize = 0;
    double userHeight = 0;
    double userWeight = 0;
    double userAge = 0;
    string multipleTries = "Yes";
    
    // Loop through the calculations until the user chooses to stop
    while (multipleTries == "Yes")
    {
        // Get user input for height, weight, and age
        cout << "Please enter your height: ";
        cin >> userHeight;
        cout << endl;
        
        cout << "Please enter your weight: ";
        cin >> userWeight;
        cout << endl;
        
        cout << "Please enter your age: ";
        cin >> userAge;
        cout << endl;
        
        // Calculate hat size and print it to the console
        cout << "Hat size is: ";
        cout << setprecision(1) << fixed << (calculateHatSize(userWeight, userHeight));
        cout << endl;
        
        // Calculate jacket size and print it to the console
        cout << "Jacket size is: ";
        cout << setprecision(1) << fixed << (calculateJacketSize(userWeight, userHeight, userAge));
        cout << endl;
        
        // Calculate waist size and print it to the console
        cout << "Waist size is: ";
        cout << setprecision(1) << fixed << (userWeight, userAge) << " inches";
        cout << endl << endl;
        
        // Ask user if they want to repeat the calculations
        cout << "Do you wish to repeat the calculations for a another measurement?:";
     
