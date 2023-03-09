// Author: Michael Bottom
// Description: This program inputs scores on exercises from a user, for n number of exercises,
// and calculates the total percentage score.
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int nExercises = 0; // declare variable to hold the number of exercises
	int swapScore = 0; // declare variable to hold the score of a single exercise
	int swapScoreCumulative = 0; // declare variable to hold the cumulative score across all exercises
	int swapFullPoints = 0; // declare variable to hold the total possible points for a single exercise
	int swapFullPointsCumulative = 0; // declare variable to hold the cumulative total possible points across all exercises
	double totalScorePercentage; // declare variable to hold the total score percentage
	int i; // declare variable to be used as loop counter

	// Prompt user to input the number of exercises
	cout << "How many exercises to input?: " << endl;
	cin >> nExercises;

	// Loop through all exercises and prompt user to input the score and total possible points for each
	for (i = 1; i <= nExercises; i++)
	{
		cout << "Score received for exercise " << i << ": ";
		cin >> swapScore;
		cout << "Total points possible for exercise " << i << ": ";
		cin >> swapFullPoints;
		swapScoreCumulative += swapScore; // Add current exercise score to cumulative score
		swapFullPointsCumulative += swapFullPoints; // Add current exercise total possible points to cumulative total possible points
	}

	// Calculate the total score percentage and output the results
	totalScorePercentage = (double(swapScoreCumulative) / double(swapFullPointsCumulative)) * 100.0;
	cout << "Your total is " << swapScoreCumulative << " out of ";
	cout << swapFullPointsCumulative << ", or ";
	cout << totalScorePercentage << "%. \n"; 

	return 0; // Return 0 to indicate successful program execution
}

