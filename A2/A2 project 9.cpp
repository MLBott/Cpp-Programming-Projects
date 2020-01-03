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
	double n = 2575;
	double guess;
	double lastGuess;
	double r;
	double guessClosenessCalc;

	cout << "Guess the square root of a number: ";
	cin >> guess;
	
	guessClosenessCalc = 200.0;
	

	while (guessClosenessCalc >= .01 * guess)
	{
		r = n / guess;
		lastGuess = guess;
		guess = (guess + r) / 2.0;

		if (lastGuess > guess)
		{
			guessClosenessCalc = (lastGuess - guess) / lastGuess;
		}
		else
		{
			guessClosenessCalc = (guess - lastGuess) / guess;
		}
	}
	if (guessClosenessCalc <= .01 * guess)
	{
		cout << "The matching guess is: " << guess;
		cout << endl;
	}
	return 0;
}


