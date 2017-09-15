// ChangeMachine3.cpp : Defines the entry point for the console application.
//This program is designed to be a vending machine that ask for the cost of the item and displays the change when funds are met.  
// Alistar Feury
// INFO 450


#include "stdafx.h"
#include <iostream>
using namespace std;





void change(int change) {
	int dollar = change / 100.00;
	change %= 100.00;
	int quarter = change / 25.00;
	change %= 25.00;
	int dime = change / 10.00;
	change %= 10.00;
	int nickel = change / 5.00;
	change %= 5.00;
}

int main()
{
	float totalCost;
	float amountPaid;
	float addMoney;
	int change;

	double reamainChange;

	int changeinDollars = 0;
	int changeinQuarters;
	int changeinDimes;
	int changeinNickels;

	void returnChange(int& quarterCount, int& dimeCount, int& nickelCount,
		int& returnQuarter, int& returnDime, int& returnNickel, double& change)

}
	while (true)
	{
		cout << "Welcome!  \nPlease enter the total cost of your item(s): " << endl;
		cout << "$ ";
		cin >> totalCost;
		if (totalCost == 0)
			break;

		cout << "How much would you like to pay? " << endl;
		cout << "$ ";
		cin >> amountPaid;

		while (amountPaid < totalCost)
		{
			cout << "You have insufficient funds" << endl;
			cout << "Enter more into the machine when ready " << endl;
			cout << " $ ";
			cin >> addMoney;
			amountPaid = amountPaid + addMoney;
		}

		cout << "You paid $ " << amountPaid << endl;

		if (amountPaid == totalCost)
			cout << "No Change" << endl;

		else if (amountPaid > totalCost)
		{
			change = amountPaid - totalCost;
			cout << "Your change is $ " << change << endl;
			while (change >= .25 && changeinQuarters > 0)
			{
				returnQuarter++;
				changeinQuarters--;
				change = change - .25;
			}
			while (change >= .10 && changeinDimes > 0)
			{
				returnDime++;
				changeinDimes--;
				change = change - .10;

			}
			while (change >= .05 && changeinNickels > 0)
			{
				returnNickel++;
				changeinNickels--;
				change = change - .05;
			}
		}

			cout << "What did we give back to you? " << endl;
			cout << "Dollar(s): " << changeinDollars << endl;
			cout << "Quarter(s): " << changeinQuarters << endl;
			cout << "Dime(s): " << changeinDimes << endl;
			cout << "Nickel(s):" << changeinNickels << endl;
		}
	}
	return 0;
}
