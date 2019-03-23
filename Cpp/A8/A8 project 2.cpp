/*
Author: Michael Bottom
Date: 03/17/2019
Depaul University CSC 309
Assignment 8, Part 2

This program prompts the user to as a question. It then opens a file and outputs one line 
from the file to the console. When the next question is asked it reads the next line in the 
file and outputs that line to the console. For the first line in the file, #N is replaced 
with the global const int NUMBER_OF_CHAPTERS and counts down to 1 for each iteration of that 
line. Newline function is used to read the source file.*/

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

const int NUMBER_OF_CHAPTERS = 20;


string newLine(istream& inStream, double programRuntimes) {
	
	char fileWord;
	string fileString;
	string hashN = "#N";

	do
	{
		inStream.get(fileWord);
		fileString += fileWord;
		if (inStream.eof() == true) {
			inStream.clear();
			inStream.seekg(0, ios::beg);	
		}
	} while (fileWord != '\n');

	for (int i = 0; i < fileString.length(); i++) {
		
		if (fileString[i] == '#') {
			fileString.erase(i);
			fileString += to_string(int(NUMBER_OF_CHAPTERS - programRuntimes));
			fileString += '.';
		}
	}
	return fileString;
}


int main() {
	ifstream inStream;
	char inputChar;
	string inputQuery, mySentence;
	int counter = 0;
	double programRuntimes = 0;

	inStream.open("fortune teller.txt");
	do {
		cout << endl << "Ask any question. Any question at all: \n \n" << endl;
		do
		{
			cin.clear();
			cin.get(inputChar);
			inputQuery += inputChar;
			if (inputChar == '\n')
			{
				break;
			}
		} while (true);
		
		
		do {	
			mySentence = newLine(inStream, programRuntimes);
			cout << endl << mySentence << endl << endl << endl;
			inputQuery = "";
			
			programRuntimes += .125;
			if (programRuntimes == 20) {
				programRuntimes = 0;
			}

			break;
			
		} while (true);		
	} while (true);
	
	inStream.close();
	
	return 0;
}







































