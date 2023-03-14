/*
Author: Michael Bottom

This program defines a Money class that stores a monetary amount in dollars and cents.
It uses accessors and mutators for dollars and cents. It has a function to convert int dollars
and int cents into doubles. The main function has two Money objects to test the class.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Money
{
public:
	// Getters and setters for the dollars and cents variables
	int getDollars()
	{
		return dollars;
	}
	int getCents()
	{
		return cents;
	}
	void setDollars(int newDollars)
	{
		dollars = newDollars;
	}
	void setCents(int newCents)
	{
		cents = newCents;
	}
	
	// Method for converting the Money object to a double value
	int doubleConversion(int dollars, int cents);

private:
	// Private variables to hold the dollars and cents amounts
	int dollars;
	int cents;
};

// Method for converting the Money object to a double value
int Money::doubleConversion(int dollars, int cents)
{
	return (double)dollars, (double)cents;
}

int main()
{
	// Create a Money object called allowance and set its values
	Money allowance;
	allowance.setDollars(5);
	allowance.setCents(35);
	
	// Output the allowance in dollars and cents
	cout << allowance.getDollars() << ".";
	cout << allowance.getCents() << endl;

	// Create a Money object called itemRefund and set its values
	Money itemRefund;
	itemRefund.setDollars(200);
	itemRefund.setCents(10);
	
	// Output the item refund in dollars and cents
	cout << itemRefund.getDollars() << ".";
	cout << itemRefund.getCents() << endl;
	
	return 0;
}


