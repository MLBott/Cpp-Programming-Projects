/*
Author: Michael Bottom
Date: 2/4/2019
Depaul University CSC 309

This program manages a list of up to ten players and their high scores. It uses two arrays,
one for players and one for their scores. It uses a menu in the main fuction to allow adding
a player and their score, deleting a player and their score, printing out all scores, checking
a specific player's score, or exiting the program. If a player is not found the program tells
the user.*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>


using namespace std;

int main()
{
	string playerNames[] = { " ", " ", " ", " ", " ", " ", " ", " ", " ", " " };
	int playerScores[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	string playerName;
	int playerScore;
	bool programLoop = true;
	string userChoice = "NA";
	string blankString = " ";


	do {
		cout << endl << "==== Player Management List ====" << endl;
		cout << "A. Add a new player and score  <Press 'A'>" << endl;
		cout << "B. Remove a player and score  <Press 'B'>" << endl;
		cout << "C. Print all player names and scores to screen  <Press 'C'>" << endl;
		cout << "D. Check a specific player's score  <Press 'D'>" << endl;
		cout << "E. Exit  <Press 'E'>" << endl;

		cin >> userChoice;
		if (userChoice == "A")
		{
			int i;
			for (i = 0; i < 10; i++)
			{
				if (playerNames[i] == " ")
				{
					cout << endl << "Please enter the player's last name: ";
					cin >> playerNames[i];
					cout << "Name saved.";
					cout << endl << "Please enter the player's score: ";
					cin >> playerScores[i];
					cout << "Score saved." << endl;
					break;
				}
				else
				{
					cout << "Position is full.";
				}
			}
		}
		else if (userChoice == "B")
		{
			int i;
			cout << endl << "Please enter the player's last name: ";
			cin >> playerName;
			for (i = 0; i < 10; i++)
			{
				if (playerNames[i] == playerName)
				{
					playerNames[i] = " ";
					playerScores[i] = NULL;
				}
			}
			cout << endl;
		}
		else if (userChoice == "C")
		{
			int i;
			for (i = 0; i < 10; i++)
			{
				cout << endl << playerNames[i] << endl << playerScores[i];
			}
			cout << endl;
		}
		else if (userChoice == "D")
		{
			int i;
			cout << endl << "Please enter the player's last name you want to check: ";
			cin >> playerName;
			for (i = 0; i < 10; i++)
			{
				if (playerNames[i] == playerName)
				{
					cout << endl << "That player's score is: " << playerScores[i];
					break;
				}
				else
				{
					cout << endl << "That player is not in the list.";
				}
				cout << endl;
			}
		}
		else if (userChoice == "E")
		{
			continue;
		}
		else { cout << endl << endl << "Invalid Choice. Please choose again."; }

	} while (userChoice != "E");


	return 0;
}

