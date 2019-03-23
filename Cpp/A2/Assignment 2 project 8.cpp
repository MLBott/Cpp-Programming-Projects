/*
Author: Michael Bottom
Date: 01/21/2019
Depaul University CSC 309

This program decrements celsius temp until it equals fahrenheit at the same value.
And then outputs the matching temp.*/


#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double fTemp;
	int cTemp = 100;
	int i;
	int matchTemp;
	for (i = 0; i < 400; i++)
	{
		fTemp = ((9.0 / 5.0) * double(cTemp)) + 32.0;

		if (cTemp == fTemp)
		{
			cout << "Matching temperature is: " << fTemp << endl;
		}
		cTemp = cTemp - 1;
	}

	return 0;

}


