/*
Author: Michael Bottom

This program plays the game of Pig with the user and the computer as players. Each player
takes a turn rolling the six-sided die, attempting to reach 20 without getting a die roll
of 1, which loses all points for that round. Whichever player makes it to 100 first wins.
Separate functions are used for the user turn, computer turn, and dice roll.*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Main function
int main()
{
    // Initialize variables
    int i;
    int humanTotalScore = 0;
    int computerTotalScore = 0;
    
    // Declare function prototypes
    int humanTurn(int humanTotalScore);
    int computerTurn(int computertotalScore);

    // Continue the game as long as neither player's total score is 100 or more
    for (i = 0; humanTotalScore < 100 || computerTotalScore < 100; i++)
    {
        // Call the humanTurn and computerTurn functions to take their turns
        humanTotalScore = humanTotalScore + humanTurn(humanTotalScore);
        computerTotalScore = computerTotalScore + computerTurn(computerTotalScore);
        
        // Check if either player has won, and print a message to the console
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

    // Return 0 to exit the program
    return 0;
}

// Function for the human player's turn
int humanTurn(int humanTotalScore)
{
    // Initialize variables
    int j;
    int humanRollTurnTotal = 0;
    int humanLastTotal = 0;
    int calculatedRoll = 0;
    string holdChoice = "NA";
    
    // Declare function prototype
    int userRoll();

    // Continue the turn as long as the humanRollTurnTotal is less than 20
    for (j = 0; humanRollTurnTotal < 20; j++)
    {
        // Roll the dice and update the total score
        cout << "Player Rolling... \n";
        humanLastTotal = humanTotalScore;
        humanTotalScore = humanTotalScore + userRoll() + 1;
        calculatedRoll = humanTotalScore - humanLastTotal;
        cout << "You rolled a ";
        cout << calculatedRoll;
        cout << endl;
        
        // If the player rolls a 1, their turn ends and a message is printed to the console
        if (calculatedRoll == 1)
        {
            cout << "Oh no, you rolled a 1. Turn Lost!" << endl;
            humanTotalScore = humanTotalScore - 1;
            return 0;
        }
        
        // Update the humanRollTurnTotal and print the total score to the console
        humanRollTurnTotal = humanRollTurnTotal + calculatedRoll;
        cout << "Your total score is: ";
        cout << humanTotalScore;
        cout << endl;
        
        // Ask the player if they want to roll again or hold, and get their input
        cout << "Would you like to ROLL AGAIN <R> or HOLD <H>? ";
        cin >> holdChoice;
        
        // If the player chooses to hold, break out of the loop
        if (holdChoice == "H")
        {
            cout << endl << endl << endl;
            break;
        }
        cout << endl;
    }
    
    // Return the humanRollTurnTotal
    return humanRollTurnTotal;
}

// Function for the computer player's turn
int computerTurn(int computerTotalScore)
{
    // Initialize variables
    int k;
    int computerRollTurnTotal = 0;
    int computer 
