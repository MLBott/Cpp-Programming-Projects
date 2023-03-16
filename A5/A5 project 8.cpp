/*
Author: Michael Bottom

This program creates a Temperature class. It has mutator functions to set the 
private member, degrees, in Kelvin from input parameters of for Kelvin, Celsius,
and Fahrenheit. It has accessor funcitons to show the the stored degrees in 
Kelvin, Celsius, and Fahrenheit. The class has operator overloads as member
functions for comparing two temp values, for outputing a temperature in 
Fahrenheit, and for storing a temperature input as Fahrenheit.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Temperature class to store and convert temperatures between Kelvin, Fahrenheit, and Celsius
class Temperature
{
public:
    // Setters for temperature in Kelvin, Fahrenheit, and Celsius
    void setTempKelvin(double tempValue);
    void setTempFahrenheit(double tempValue);
    void setTempCelsius(double tempValue);

    // Getters for temperature in Kelvin, Fahrenheit, and Celsius
    double showTempKelvin();
    double showTempFahrenheit();
    double showTempCelsius();

    // Operator overloads for comparison and stream operators
    bool operator== (const double tempValue);
    double operator<< (const double tempValue);
    double operator>> (const double tempValue);

private:
    // Private member variable to store the temperature in Kelvin
    double degrees;
};

// Main function for user interaction
int main()
{
    Temperature conversion;
    double userValue = 0;

    // Set and display temperature in Kelvin
    cout << "Store a Kelvin temperature in Kelvins. Enter a value: ";
    cin >> userValue;
    conversion.setTempKelvin(userValue);
    cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;

    // Set and display temperature in Fahrenheit
    cout << "Store a Fahrenheit temperature in Kelvins. Enter a value: ";
    cin >> userValue;
    conversion.setTempFahrenheit(userValue);
    cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;

    // Set and display temperature in Celsius
    cout << "Store a Celsius temperature in Kelvins. Enter a value: ";
    cin >> userValue;
    conversion.setTempCelsius(userValue);
    cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;

    return 0;
}

// Temperature class member function implementations

// Set temperature in Kelvin
void Temperature::setTempKelvin(double tempValue)
{
    degrees = tempValue;
}

// Set temperature in Fahrenheit
void Temperature::setTempFahrenheit(double tempValue)
{
    degrees = (((tempValue - 32) * (5 / 9)) + 273);
}

// Set temperature in Celsius
void Temperature::setTempCelsius(double tempValue)
{
    degrees = tempValue + 273.15;
}

// Get temperature in Kelvin
double Temperature::showTempKelvin()
{
    return degrees;
}

// Get temperature in Fahrenheit
double Temperature::showTempFahrenheit()
{
    return (((degrees - 273.15) * (9 / 5)) + 32);
}

// Get temperature in Celsius
double Temperature::showTempCelsius()
{
    return (degrees - 273.15);
}

// Overload equality operator
bool Temperature::operator== (const double tempValue)
{
    return tempValue == degrees;
}

// Overload insertion operator
double Temperature::operator<< (const double tempValue)
{
    double kelvinToFahrenheit = (((degrees - 273.15) * (9 / 5)) + 32);
    cout << "The temperature in Fahrenheit is: " << kelvinToFahrenheit << "\n";
    return showTempFahrenheit();
}

// Overload extraction operator
double Temperature::operator>> (const double tempValue)
{
    return (((tempValue - 32) * (5 / 9)) + 273);
}


