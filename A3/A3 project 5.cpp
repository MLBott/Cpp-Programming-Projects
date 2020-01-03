/*
Author: Michael Bottom

This program asks the user for their height, weight and age and then calculates the
user's hat size, jacket size, and waist size using appropriate algorithms and outputs
it to the console. Separate functions are used for each output measurement.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


int main()
{
	double hatSize = 0;
	double jacketSize = 0;
	double waistSize = 0;
	double userHeight = 0;
	double userWeight = 0;
	double userAge = 0;
	string multipleTries = "Yes";
	double calculateHatSize(double userWeight, double userHeight);
	double calculateJacketSize(double userWeight, double userHeight, double userAge);
	double calculateWaistSize(double userWeight, double userAge);


	while (multipleTries == "Yes")
	{


		cout << "Please enter your height: ";
		cin >> userHeight;
		cout << endl;
		cout << "Please enter your weight: ";
		cin >> userWeight;
		cout << endl;
		cout << "Please enter your age: ";
		cin >> userAge;
		cout << endl;

		cout << "Hat size is: ";
		cout << setprecision(1) << fixed << (calculateHatSize(userWeight, userHeight));
		cout << endl;

		cout << "Jacket size is: ";
		cout << setprecision(1) << fixed << (calculateJacketSize(userWeight, userHeight, userAge));
		cout << endl;

		cout << "Waist size is: ";
		cout << setprecision(1) << fixed << (userWeight, userAge) << " inches";
		cout << endl << endl;

		cout << "Do you wish to repeat the calculations for a another measurement?:";
		cout << endl;
		cout << "Type 'Yes' or 'No' : ";
		cin >> multipleTries;
		cout << endl;

	}

	return 0;
}

double calculateHatSize(double Weight, double Height)
{
	double blue = Weight;
	double green = Height;
	double formulaHatSize = ((blue / green) * 2.9);
	return formulaHatSize;
}

double calculateJacketSize(double userWeight, double userHeight, double userAge)
{
	double ageAdjustJacket = 0;
	if (userAge > 30)
	{
		ageAdjustJacket = (1 / 8 * (userAge - 30));
	}
	else
	{
		ageAdjustJacket = 0.0;
	}

	double formulaJacketSize = (((userHeight * userWeight) / 288) + (ageAdjustJacket));
	return formulaJacketSize;

}

double calculateWaistSize(double userWeight, double userAge)
{
	double ageAdjustWaist = 0;
	if (userAge > 29)
	{
		ageAdjustWaist = (1 / 10 * ((userAge - 28) / 2));
	}
	else
	{
		ageAdjustWaist = 0.0;
	}
	double formulaWaistSize = (((userWeight / 5.7) + (ageAdjustWaist)));
	return formulaWaistSize;
}


