/*
Author: Michael Bottom

This program inputs scores on exercises from a user, for n number of exercies.
And then calculates the total percentage score.*/

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int nExercises = 0;
	int swapScore = 0;
	int swapScoreCumulative = 0;
	int swapFullPoints = 0;
	int swapFullPointsCumulative = 0;
	double totalScorePercentage;
	int i;
	cout << "How many exercises to input?: " << endl;
	cin >> nExercises;


	for (i = 1; i <= nExercises; i++)
	{
		cout << "Score received for exercise " << i << ": ";
		cin >> swapScore;
		cout << "Total points possible for exercise " << i << ": ";
		cin >> swapFullPoints;
		swapScoreCumulative = swapScoreCumulative + swapScore;
		swapFullPointsCumulative = swapFullPointsCumulative + swapFullPoints;
	}
	totalScorePercentage = (double(swapScoreCumulative) / double(swapFullPointsCumulative)) * 100.0;
	cout << "Your total is " << swapScoreCumulative << " out of ";
	cout << swapFullPointsCumulative << ", or ";
	cout << totalScorePercentage << "%.";
	cout << endl;

	return 0;

}

