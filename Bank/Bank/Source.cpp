#include<iostream>
#include "Calculations.h"
#include "Account.h"
#include "Customer.h"

using namespace std;

void main()
{
	int response, customerNo;
	string newName, newNameAppend;
	double withdraw;

	Calculations calc[10000];
	Account acc[10000];
	Customer cust[10000];

	//hard coded test data

	acc[2561].setBalance(3561.25);
	acc[2561].setPin(1234);
	cust[2561].setName("Joe Kappa");

	acc[3241].setBalance(200.57);
	acc[3241].setPin(1234);
	cust[3241].setName("Dave Johns");

	acc[8902].setBalance(1000.56);
	acc[8902].setPin(1234);
	cust[8902].setName("Jodh Doe");


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
					cust[i].setName(newNameAppend);
					acc[i].setAccID(i);
					customerNo = i;
					break;
				}
			}
			acc[customerNo].setPin(0);
			cout << "Enter new pin..." << endl;
			cin >> response;
			acc[customerNo].setPin(response);
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
					cout << "How much is being withdrawn?" << endl;
					cin >> withdraw;
					acc[customerNo].withdrawal(withdraw);
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 2:
					acc[customerNo].setBalance(calc[customerNo].deposit(acc[customerNo].getBalance()));
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