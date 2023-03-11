/*
Author: Michael Bottom

This program uses a function, getHighScore, to read a text file, "scores.txt",
and find the highest score and the player associated with that score. Those
found values, highest player score and highest score, are assigned to the function
formal parameters.*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Main function
int main()
{
    // Initialize variables
    string playerName = "";
    int playerHighScore = 0;
    
    // Call the getHighScore function to get the highest score and player name from the scores.txt file
    getHighScore(playerName, playerHighScore);
    
    // Return 0 to exit the program
    return 0;
}

// Function for getting the highest score and player name from the scores.txt file
string getHighScore(string playerName, int playerHighScore)
{
    // Open the scores.txt file for reading
    ifstream infile("scores.txt");
    
    // Initialize variables
    string a, b;
    int highestScore;
    
    // Read through each line of the file and print the player name and score to the console
    while (infile >> a >> b)
    {
        cout << a << endl << b << endl;
        
        // Convert the score from a string to an integer
        int highestScore = stoi(b);
        
        // If the score is higher than the current playerHighScore, update the playerHighScore and playerName
        if (highestScore > playerHighScore)
        {
            playerHighScore = highestScore;
            playerName = a;
        }
    }
    
    // Print the highest score and player name to the console
    cout << endl << "The highest is " << playerName << " with a score of " << playerHighScore << endl;
    
    // Return 0 to exit the function (this function doesn't actually return a string, but the function signature requires it)
    return 0;
}

