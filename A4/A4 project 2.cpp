/*
Author: Michael Bottom
Date: 2/4/2019
Depaul University CSC 309

This program defines a class named Money that stores a monetary amount in dollars and cents.
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
	int doubleConversion(int dollars, int cents);
	
private:
	int dollars;
	int cents;
};

int Money::doubleConversion(int dollars, int cents)
{
	return (double)dollars, (double)cents;
}


int main()
{
	Money allowance;
	allowance.setDollars(5);
	allowance.setCents(35);
	cout << allowance.getDollars() << ".";
	cout << allowance.getCents() << endl;

	Money itemRefund;
	itemRefund.setDollars(200);
	itemRefund.setCents(10);
	cout << itemRefund.getDollars() << ".";
	cout << itemRefund.getCents() << endl;
}


