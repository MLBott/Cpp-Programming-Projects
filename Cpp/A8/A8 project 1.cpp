/*
Author: Michael Bottom
Date: 03/17/2019
Depaul University CSC 309
Assignment 8, Part 1

This program opens a source file and an output file using stream I/O, it then uses a second function that 
reads the data in, assings the data to string and int variables, and writes the variable values to a new line 
in an output file. It also calculates the average of each line's ints and appends that to the end of the line. 
The program continues until the end of the file, using a do-while loop. It then closes both files.*/

//#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
using std::ifstream;
using std::ofstream;

void fileDataTransfer(ifstream& sourceFile, ofstream& outputFile) {

	string lastName, firstName;
	int firstScore, secondScore, thirdScore, fourthScore, fifthScore, sixthScore, seventhScore,
		eighthScore, ninthScore, tenthScore;
	double averageScore;

	do {
		sourceFile >> lastName >> firstName >> firstScore >> secondScore >> thirdScore >> fourthScore
			>> fifthScore >> sixthScore >> seventhScore >> eighthScore >> ninthScore >> tenthScore;
		averageScore = (firstScore + secondScore + thirdScore + fourthScore + fifthScore + sixthScore +
			seventhScore + eighthScore + ninthScore + tenthScore) / 10;
		outputFile << lastName << ' ' << firstName << ' ' << firstScore << ' ' << secondScore << ' ' <<
			thirdScore << ' ' << fourthScore << ' ' << fifthScore << ' ' << sixthScore << ' ' <<
			seventhScore << ' ' << eighthScore << ' ' << ninthScore << ' ' << tenthScore << ' ' << averageScore <<
			'\n' << flush;
	} while (!sourceFile.eof());
	sourceFile.close();
	outputFile.close();
}
int main() {
	ifstream inStream;
	ofstream outStream;
	inStream.open("course records.txt");
	outStream.open("course records amended.txt");

	fileDataTransfer(inStream, outStream);
	
	return 0;
}

