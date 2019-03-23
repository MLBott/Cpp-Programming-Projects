/*
Author: Michael Bottom
Date: 02/11/2019
Depaul University CSC 309

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

class Temperature
{
public:
	void setTempKelvin(double tempValue);
	void setTempFahrenheit(double tempValue);
	void setTempCelsius(double tempValue);
	double showTempKelvin();
	double showTempFahrenheit();
	double showTempCelsius();
	bool operator== (const double tempValue);
	double operator<< (const double tempValue);
	double operator>> (const double tempValue);
	

private:
	double degrees;
};


int main()
{
	Temperature conversion;
	double userValue = 0;

	
	cout << "Store a Kelvin temperature in Kelvins. Enter a value: ";
	cin >> userValue;
	conversion.setTempKelvin(userValue);
	cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;

	cout << "Store a Fahrenheit temperature in Kelvins. Enter a value: ";
	cin >> userValue;
	conversion.setTempFahrenheit(userValue);
	cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;

	cout << "Store a Celsius temperature in Kelvins. Enter a value: ";
	cin >> userValue;
	conversion.setTempCelsius(userValue);
	cout << "\n That temperature in Kelvins is: " << conversion.showTempKelvin() << endl << endl;
	
	return 0;
}

void Temperature::setTempKelvin(double tempValue)
{
	degrees = tempValue;
}

void Temperature::setTempFahrenheit(double tempValue)
{
	degrees = (((tempValue - 32) * (5 / 9)) + 273);
}

void Temperature::setTempCelsius(double tempValue)
{
	degrees = tempValue + 273.15;
}

double Temperature::showTempKelvin()
{
	return degrees;
}

double Temperature::showTempFahrenheit()
{
	return (((degrees - 273.15) * (9 / 5)) + 32);
}

double Temperature::showTempCelsius()
{
	return (degrees - 273.15);
}


bool Temperature::operator== (const double tempValue)
{
	return  tempValue == degrees;
}

double Temperature::operator<< (const double tempValue)
{
	double kelvinToFahrenheit = (((degrees - 273.15) * (9 / 5)) + 32);
	cout << "The temperature in Fahrenheit is: " << kelvinToFahrenheit << "\n";
	return showTempFahrenheit();
}

double Temperature::operator>> (const double tempValue)
{
	
	return (((tempValue - 32) * (5 / 9)) + 273);
}


