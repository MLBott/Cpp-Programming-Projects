/*
Author: Michael Bottom
Date: 02/11/2019
Depaul University CSC 309

This program creates a HotDogStand class with three private members to store the hot dog
stand's ID, the hot dog store's number of hot dogs sold, and static number of hot dogs sold.
The class has a constructor to initialize stand ID and number of hot dogs sold. It has a mutator,
justSold() to update the number of hot dogs sold, an accessor to read the number of hot dogs
sold and a static member to read the total number of hot dogs sold.

The main function creates a menu for three different Chicago hot dog stands, displays their menu,
and allows the user to enter the sales special and read the number the total number of hot dogs
sold for that stand.*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class HotDogStand
{
public:
	HotDogStand(int standIdValue, int hotDogsSoldValue);
	void justSold();
	int totalSold();
	static int allIdSold();

private:
	int standId;
	int hotDogsSold;
	static int allIdHotDogsSold;
};

int HotDogStand::allIdHotDogsSold = 0;

int main()
{
	char userChoiceMainMenu = 'N';
	int userChoiceStand = 0;
	int newSalesAmount = 0;
	int newSalesSpecialChoice = 0;
	HotDogStand michiganAve(0001, 0);
	HotDogStand magnificentMile(0002, 0);
	HotDogStand lakeShoreDrive(0003, 0);

	while (userChoiceMainMenu != 'E')
	{
		cout << "Current Hot Dog Stands are: \n 1. Michigan Ave \n 2. Magnificent Mile \n 3. Lake Shore Drive.\n";
		cout << "Enter the choice for stand number: ";
		cin >> userChoiceStand;

		if (userChoiceStand == 1)
		{
			cout << "Michigan Ave Hot Dog Stand's number of hot dogs sold is: " << michiganAve.totalSold() << endl;
			cout << "Enter new of new sales: \n";
			cin >> newSalesAmount;
			int i;
			for (i = 0; i < newSalesAmount; i++)
			{
				cout << " 1. Chipotle Hot Dog\n 2. Chili Cheese Hot Dog\n 3. Mac and Cheese Hot Dog\n"
					<< " 4. Double Buffalo Hot Dogs\n 5. Onion and Bacon Hot Dog\n 6. Family Meal Hot Dogs Special\n";
				cout << "Enter sold sale special number: \n";
				cin >> newSalesSpecialChoice;
				if (newSalesSpecialChoice == 1)
				{
					michiganAve.justSold();
				}
				else if (newSalesSpecialChoice == 2)
				{
					michiganAve.justSold();
				}
				else if (newSalesSpecialChoice == 3)
				{
					michiganAve.justSold();
				}
				else if (newSalesSpecialChoice == 4)
				{
					michiganAve.justSold();
					michiganAve.justSold();
				}
				else if (newSalesSpecialChoice == 5)
				{
					michiganAve.justSold();
				}
				else if (newSalesSpecialChoice == 6)
				{
					int counter = 0;
					while (counter < 4)
					{
						michiganAve.justSold();
						counter++;
					}
				}
			}
			cout << "Michigan Ave Hot Dog Stand's number of hot dogs sold is: " << michiganAve.totalSold() << endl;
		}
		else if (userChoiceStand == 2)
		{
			cout << "Magnificent Mile Hot Dog Stand's number of hot dogs sold is: " << magnificentMile.totalSold() << endl;
			cout << "Enter new of new sales: \n";
			cin >> newSalesAmount;
			int i;
			for (i = 0; i < newSalesAmount; i++)
			{
				cout << " 1. Chipotle Hot Dog\n 2. Chili Cheese Hot Dog\n 3. Mac and Cheese Hot Dog\n"
					<< " 4. Double Buffalo Hot Dogs\n 5. Onion and Bacon Hot Dog\n 6. Family Meal Hots Dog Special\n";
				cout << "Enter sold sale special number: \n";
				cin >> newSalesSpecialChoice;
				if (newSalesSpecialChoice == 1)
				{
					magnificentMile.justSold();
				}
				else if (newSalesSpecialChoice == 2)
				{
					magnificentMile.justSold();
				}
				else if (newSalesSpecialChoice == 3)
				{
					magnificentMile.justSold();
				}
				else if (newSalesSpecialChoice == 4)
				{
					magnificentMile.justSold();
					magnificentMile.justSold();
				}
				else if (newSalesSpecialChoice == 5)
				{
					magnificentMile.justSold();
				}
				else if (newSalesSpecialChoice == 6)
				{
					int counter = 0;
					while (counter < 4)
					{
						magnificentMile.justSold();
						counter++;
					}
				}
			}
			cout << "Magnificent Mile Hot Dog Stand's number of hot dogs sold is: " << magnificentMile.totalSold() << endl;
		}
		else
		{
			cout << "Lake Shore Drive Hot Dog Stand's number of hot dogs sold is: " << lakeShoreDrive.totalSold() << endl;
			cout << "Enter new of new sales: \n";
			cin >> newSalesAmount;
			int i;
			for (i = 0; i < newSalesAmount; i++)
			{
				cout << " 1. Chipotle Hot Dog\n 2. Chili Cheese Hot Dog\n 3. Mac and Cheese Hot Dog\n"
					<< " 4. Double Buffalo Hot Dogs\n 5. Onion and Bacon Hot Dog\n 6. Family Meal Hot Dogs Special\n";
				cout << "Enter sold sale special number: \n";
				cin >> newSalesSpecialChoice;
				if (newSalesSpecialChoice == 1)
				{
					lakeShoreDrive.justSold();
				}
				else if (newSalesSpecialChoice == 2)
				{
					lakeShoreDrive.justSold();
				}
				else if (newSalesSpecialChoice == 3)
				{
					lakeShoreDrive.justSold();
				}
				else if (newSalesSpecialChoice == 4)
				{
					lakeShoreDrive.justSold();
					lakeShoreDrive.justSold();
				}
				else if (newSalesSpecialChoice == 5)
				{
					lakeShoreDrive.justSold();
				}
				else if (newSalesSpecialChoice == 6)
				{
					int counter = 0;
					while (counter < 4)
					{
						lakeShoreDrive.justSold();
						counter++;
					}
				}
			}
			cout << "Lake Shore Drive Hot Dog Stand's number of hot dogs sold is: " << lakeShoreDrive.totalSold() << endl;
		}
		cout << "Enter 'E' to exit or enter any other letter to continue: ";
		cin >> userChoiceMainMenu;

	}




	return 0;
}



HotDogStand::HotDogStand(int standIdValue, int hotDogsSoldValue)
{
	standId = standIdValue;
	hotDogsSold = hotDogsSoldValue;
}

void HotDogStand::justSold()
{
	hotDogsSold += 1;
}

int HotDogStand::totalSold()
{
	return hotDogsSold;
}

int HotDogStand::allIdSold()
{
	return allIdHotDogsSold;
}

