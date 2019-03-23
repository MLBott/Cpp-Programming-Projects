/*
Author: Michael Bottom
Date: 01/28/2019
Depaul University CSC 309

This program plays the game of Pig with the user and the computer as players. Each player
takes a turn rolling the six-sided die, attempting to reach 20 without getting a die roll
of 1, which loses all points for that round. Whichever player makes it to 100 first wins.
Separate functions are used for the user turn, computer turn, and dice roll.*/

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
	int i;
	int humanTotalScore = 0;
	int computerTotalScore = 0;
	int humanTurn(int humanTotalScore);
	int computerTurn(int computertotalScore);

	for (i = 0; humanTotalScore < 100 || computerTotalScore < 100; i++)
	{

		humanTotalScore = humanTotalScore + humanTurn(humanTotalScore);
		computerTotalScore = computerTotalScore + computerTurn(computerTotalScore);
		if (humanTotalScore >= 100)
		{
			cout << endl;
			cout << "Winner! Winner! Congratulations." << endl;
			break;
		}
		if (computerTotalScore >= 100)
		{
			cout << endl;
			cout << "Sorry, computer won. Please try again." << endl;
			break;
		}

	}

	return 0;
}

int humanTurn(int humanTotalScore)
{
	int j;
	int humanRollTurnTotal = 0;
	int humanLastTotal = 0;
	int calculatedRoll = 0;
	string holdChoice = "NA";
	int userRoll();

	for (j = 0; humanRollTurnTotal < 20; j++)
	{
		cout << "Player Rolling... \n";
		humanLastTotal = humanTotalScore;
		humanTotalScore = humanTotalScore + userRoll() + 1;
		calculatedRoll = humanTotalScore - humanLastTotal;
		cout << "You rolled a ";
		cout << calculatedRoll;
		cout << endl;
		if (calculatedRoll == 1)
		{
			cout << "Oh no, you rolled a 1. Turn Lost!" << endl;
			humanTotalScore = humanTotalScore - 1;
			return 0;
		}
		humanRollTurnTotal = humanRollTurnTotal + calculatedRoll;
		cout << "Your total score is: ";
		cout << humanTotalScore;
		cout << endl;
		cout << "Would you like to ROLL AGAIN <R> or HOLD <H>? ";
		cin >> holdChoice;
		if (holdChoice == "H")
		{
			cout << endl << endl << endl;
			break;
		}
		cout << endl;

	}
	return humanRollTurnTotal;
}

int computerTurn(int computerTotalScore)
{
	int k;
	int computerRollTurnTotal = 0;
	int computerLastTotal = 0;
	int compCalculatedRoll = 0;
	int userRoll();

	for (k = 0; computerRollTurnTotal < 20; k++)
	{
		cout << endl;
		cout << "Computer Rolling... \n";
		computerLastTotal = computerTotalScore;
		computerTotalScore = computerTotalScore + userRoll() + 1;
		compCalculatedRoll = computerTotalScore - computerLastTotal;
		cout << "Computer rolled a ";
		cout << compCalculatedRoll;
		cout << endl;
		if (compCalculatedRoll == 1)
		{
			cout << "Oh no, the computer rolled a 1. It loses it's turn!" << endl;
			computerTotalScore = computerTotalScore - 1;
			return 0;
		}
		computerRollTurnTotal = computerRollTurnTotal + compCalculatedRoll;
		cout << "The computer's total score is: ";
		cout << computerTotalScore;
		cout << endl;


	}
	return computerRollTurnTotal;
}

int userRoll()
{
	int roll;
	roll = rand() % 6;
	return roll;
}


