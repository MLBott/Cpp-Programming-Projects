/*
Author: Michael Bottom

This program asks the user to enter a line of text. It then counts the words in the line 
of text. Whitespace, periods, and commas are detected as delimiters for words. The program
also counts how many of each letter type are in the line of text. The program then outputs
the word and letter count to the console.*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Initialize variables
    char userChar;
    string userEntry;
    
    // Prompt user for input
    cout << "Enter a line of text to count the words and letters contained inside: \n \n";
    
    // Read user input until newline character
    while (true) {
        cin.get(userChar);
        userEntry += userChar;
        if (userChar == '\n') {
            break;
        }
    }
    
    // Initialize word counting variables
    size_t i;
    int spaceCharToggle = 0;
    int lineStart = 0;
    int isaChar = 0;
    int lastIsaChar = 0;
    int wordCounter = 0;
    
    // Count words in user input
    for (size_t i = 0; i < userEntry.length(); i++) {
        userEntry[i] = tolower(userEntry[i]);
        if ((isspace(userEntry[i]) || userEntry[i] == '.' || userEntry[i] == ',') && lineStart > 0) {
            if (lastIsaChar == 1) {
                wordCounter += 1;
                lastIsaChar = 1;
                spaceCharToggle = 0;
            }
            lastIsaChar = 0;
        }
        if (isalpha(userEntry[i])) {
            lastIsaChar = 1;
            lineStart = 1;
        }
    }
    
    // Remove non-alphabetic and non-space characters
    size_t j;
    for (size_t j = 0; j < userEntry.length();) {
        if (isalpha(userEntry[j]) == false && isspace(userEntry[j]) == false) {
            userEntry.erase(j, 1);
        } else {
            j++;
        }
    }
    
    // Sort the input string
    sort(userEntry.begin(), userEntry.end());
    
    // Display the number of words
    cout << wordCounter << " words" << endl;
    
    // Count and display the frequency of each letter
    size_t k;
    int dupliCounter = 1;
    for (size_t k = 0; k < userEntry.length(); k++) {    
        if (userEntry[k] != userEntry[k + 1] && userEntry[k] != '\n' && isspace(userEntry[k]) == false) {
            size_t n = count(userEntry.begin(), userEntry.end(), userEntry[k]);
            cout << n << ' ' << userEntry[k];
            cout << endl;
        }
    }
    
    return 0;
}





















