/*
Author: Michael Bottom
Assignment 8, Part 1

This program opens a source file and an output file using stream I/O, it then uses a second function that 
reads the data in, assings the data to string and int variables, and writes the variable values to a new line 
in an output file. It also calculates the average of each line's ints and appends that to the end of the line. 
The program continues until the end of the file, using a do-while loop. It then closes both files.*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
using std::ifstream;
using std::ofstream;

// Function to read data from the source file, calculate average scores, and write the results to the output file.
void fileDataTransfer(ifstream& sourceFile, ofstream& outputFile) {
	string lastName, firstName;
	int firstScore, secondScore, thirdScore, fourthScore, fifthScore, sixthScore, seventhScore,
		eighthScore, ninthScore, tenthScore;
	double averageScore;

	// Loop until the end of the source file is reached
	do {
		sourceFile >> lastName >> firstName >> firstScore >> secondScore >> thirdScore >> fourthScore
			>> fifthScore >> sixthScore >> seventhScore >> eighthScore >> ninthScore >> tenthScore;
		
		// Calculate the average score
		averageScore = (firstScore + secondScore + thirdScore + fourthScore + fifthScore + sixthScore +
			seventhScore + eighthScore + ninthScore + tenthScore) / 10;

		// Write the data and average score to the output file
		outputFile << lastName << ' ' << firstName << ' ' << firstScore << ' ' << secondScore << ' ' <<
			thirdScore << ' ' << fourthScore << ' ' << fifthScore << ' ' << sixthScore << ' ' <<
			seventhScore << ' ' << eighthScore << ' ' << ninthScore << ' ' << tenthScore << ' ' << averageScore <<
			'\n' << flush;
	} while (!sourceFile.eof());

	// Close the source and output files
	sourceFile.close();
	outputFile.close();
}

int main() {
	ifstream inStream; // Input file stream
	ofstream outStream; // Output file stream

	// Open the input and output files
	inStream.open("course records.txt");
	outStream.open("course records amended.txt");

	// Perform the file data transfer
	fileDataTransfer(inStream, outStream);
	
	return 0;
}

