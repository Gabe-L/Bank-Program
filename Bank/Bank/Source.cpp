#include<iostream>
#include "Calculations.h"
#include "Account.h"
#include "Customer.h"

using namespace std;

void main()
{
	int response, customerNo;
	string newName, newNameAppend;

	Calculations calc[10000];
	Account acc[10000];
	Customer cust[10000];

	//hard coded test data

	acc[2561].setAcc(3561.25);
	acc[2561].setAcc(1234);
	cust[2561].setCust("Joe Kappa");

	acc[3241].setAcc(200.57);
	acc[3241].setAcc(1234);
	cust[3241].setCust("Dave Johns");

	acc[8902].setAcc(1000.56);
	acc[8902].setAcc(1234);
	cust[8902].setCust("Jodh Doe");


	do
	{
		cout << "Enter the customer ID or -1 to add a new customer..." << endl;
		cin >> customerNo;
		if (customerNo == -1)
		{
			cout << "What is the customer's name?" << endl;

			cin>>newNameAppend;
			getline(cin, newName);
			newNameAppend.append(newName);

			for (int i = 0; i <= 10000; i++)
			{
				if (cust[i].getName() == "")
				{
					cust[i].setCust(newNameAppend);
					cust[i].setCust(i);
					customerNo = i;
					break;
				}
			}
			acc[customerNo].setAcc(0);
			cout << "Enter new pin..." << endl;
			cin >> response;
			acc[customerNo].setAcc(response);
			cout << endl << "Account has been set up for " << cust[customerNo].getName() << ", the customer's personal ID is " << customerNo << endl << endl;
		}
		cout << "Please enter your PIN..." << endl;
		cin >> response;
		if (response != acc[customerNo].getPin())
		{
			cout << "Pin incorrect." << endl;
		}
		else
		{
			do
			{
				cout << "What function would you like to perform? (Enter a number)" << endl;
				cout << "1. Withdraw from account..." << endl;
				cout << "2. Deposit to account..." << endl;
				cout << "3. Display balance..." << endl;
				cout << "4. Enter Other ID..." << endl;
				cout << "5. Quit..." << endl << endl;

				cin >> response;
				cout << endl;

				switch (response)
				{
				case 1:
					acc[customerNo].withdrawal();
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 2:
					acc[customerNo].setAcc(calc[customerNo].deposit(acc[customerNo].getBalance()));
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 3:
					cout << "Balance is: " << acc[customerNo].getBalance() << endl << endl;
					break;
				}
			} while (response < 4);
		}
	} while (response < 5);
}