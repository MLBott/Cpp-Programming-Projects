/*
Author: Michael Bottom

This program manages a list of up to ten players and their high scores. It uses two arrays,
one for players and one for their scores. It uses a menu in the main fuction to allow adding
a player and their score, deleting a player and their score, printing out all scores, checking
a specific player's score, or exiting the program. If a player is not found the program tells
the user.*/

// C++ code to manage player names and scores
#include stdafx.h
#include <iostream>

using namespace std;

int main() {
// Initialize arrays and variables
string playerNames[] = { " ", " ", " ", " ", " ", " ", " ", " ", " ", " " };
int playerScores[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
string playerName;
int playerScore;
string userChoice = "NA";

// Main program loop
do {
    // Print menu
    cout << endl << "==== Player Management List ====" << endl;
    cout << "A. Add a new player and score  <Press 'A'>" << endl;
    cout << "B. Remove a player and score  <Press 'B'>" << endl;
    cout << "C. Print all player names and scores to screen  <Press 'C'>" << endl;
    cout << "D. Check a specific player's score  <Press 'D'>" << endl;
    cout << "E. Exit  <Press 'E'>" << endl;

    // Get user choice
    cin >> userChoice;

    // Handle user choice
    if (userChoice == "A") {
        // Add a new player
        int i;
        for (i = 0; i < 10; i++) {
            if (playerNames[i] == " ") {
                cout << endl << "Please enter the player's last name: ";
                cin >> playerNames[i];
                cout << "Name saved.";
                cout << endl << "Please enter the player's score: ";
                cin >> playerScores[i];
                cout << "Score saved." << endl;
                break;
            }
            else {
                cout << "Position is full.";
            }
        }
    }
    else if (userChoice == "B") {
        // Remove a player
        int i;
        cout << endl << "Please enter the player's last name: ";
        cin >> playerName;
        for (i = 0; i < 10; i++) {
            if (playerNames[i] == playerName) {
                playerNames[i] = " ";
                playerScores[i] = 0;
            }
        }
        cout << endl;
    }
    else if (userChoice == "C") {
        // Print all players
        int i;
        for (i = 0; i < 10; i++) {
            cout << endl << playerNames[i] << endl << playerScores[i];
        }
        cout << endl;
    }
    else if (userChoice == "D") {
        // Check a specific player's score
        int i;
        cout << endl << "Please enter the player's last name you want to check: ";
        cin >> playerName;
        for (i = 0; i < 10; i++) {
            if (playerNames[i] == playerName) {
                cout << endl << "That player's score is: " << playerScores[i];
                break;
            }
            else {
                cout << endl << "That player is not in the list.";
            }
            cout << endl;
        }
    }
    else if (userChoice == "E") {
        // Exit the program
        continue;
    }
    else {
        // Invalid choice
        cout << endl << endl << "Invalid Choice. Please choose again.";
    }

} while (userChoice != "E");

return 0;


