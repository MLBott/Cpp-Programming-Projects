/*
Author: Michael Bottom

This program uses a function, getHighScore, to read a text file, "scores.txt",
and find the highest score and the player associated with that score. Those
found values, highest player score and highest score, are assigned to the function
formal parameters.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
	string playerName = "";
	int playerHighScore = 0;

	string getHighScore(string playerName, int playerHighScore);

	getHighScore(playerName, playerHighScore);
	return 0;
}

string getHighScore(string playerName, int playerHighScore)
{
	ifstream infile("scores.txt");
	string a, b;
	int highestScore;
	

	while (infile >> a >> b)
	{
		cout << a << endl << b << endl;
		int highestScore = stoi(b);
		if (highestScore > playerHighScore)
		{
			playerHighScore = highestScore;
			playerName = a;
		}
		
	}
	cout << endl << "The highest is " << playerName << " with a score of " << playerHighScore << endl;
	return 0;

}


