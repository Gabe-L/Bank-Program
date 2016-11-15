#include<iostream>
#include "Calculations.h"
#include "Account.h"
#include "Customer.h"

using namespace std;

void main()
{
	int response, customerNo, custID;
	string newName, newNameAppend;
	double withdraw, borrow, interest = 0.0025;

	Calculations calc[10000];
	Account acc[10000];
	Customer cust[10000];

	//hard coded test data -----------------------------------

	acc[2561].setBalance(3561.25);
	acc[2561].setPin(1234);
	cust[2561].setName("Joe Kappa");

	acc[3241].setBalance(200.57);
	acc[3241].setPin(1234);
	cust[3241].setName("Dave Johns");

	acc[8902].setBalance(1000.56);
	acc[8902].setPin(1234);
	cust[8902].setName("Jodh Doe");

	//--------------------------------------------------------

	do
	{
		cout << "Enter the account ID or -1 to add a new customer..." << endl;
		cin >> customerNo;
		if (customerNo == -1)
		{
			cout << "What is the customer's name?" << endl;

			cin>>newNameAppend;
			getline(cin, newName);
			newNameAppend.append(newName);

			for (int i = 0; i <= 10000; i+=5)
			{
				if (cust[i].getName() == "")
				{
					cust[i].setName(newNameAppend);
					cust[i].setID(i);
					customerNo = i;
					break;
				}
			}
			acc[customerNo].setPin(0);
			cout << "Enter new pin..." << endl;
			cin >> response;
			acc[customerNo].setPin(response);
			cout << endl << "Account has been set up for " << cust[customerNo].getName() << ", the account's ID is " << customerNo << endl << endl;
		}
		cout << "Please enter your PIN..." << endl;
		cin >> response;
		cout << endl;
		if (response != acc[customerNo].getPin())
		{
			cout << "Pin incorrect." << endl;
		}
		else
		{
			do
			{
				cout << "Customer name: " << cust[customerNo].getName() << "   Account ID: " << customerNo << endl << endl;
				cout << "What function would you like to perform? (Enter a number)" << endl;
				cout << "1. Withdraw from account..." << endl;
				cout << "2. Quick withdraw..." << endl;
				cout << "3. Deposit to account..." << endl;
				cout << "4. Display balance..." << endl;
				cout << "5. Calculate interest..." << endl;
				cout << "6. Check loan eligibility..." << endl;
				cout << "7. Create account under this name..." << endl;
				cout << "8. Enter Other ID..." << endl;
				cout << "9. Quit..." << endl << endl;


				cin >> response;
				system("cls");

				switch (response)
				{
				case 1:
					cout << "How much is being withdrawn?" << endl;
					cin >> withdraw;
					acc[customerNo].withdrawal(withdraw);
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 2:
					acc[customerNo].withdrawal();
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 3:
					acc[customerNo].setBalance(calc[customerNo].deposit(acc[customerNo].getBalance()));
					cout << "New balance is " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 4:
					cout << "Balance is: " << acc[customerNo].getBalance() << endl << endl;
					break;
				case 5:
					cout << "Annual interest gained is " << acc[customerNo].interest(acc[customerNo].getBalance(), interest) << endl << endl;
					break;
				case 6:
					cout << "Enter amount to be borrowed..." << endl;
					cin >> borrow;
					if (acc[customerNo].loan(acc[customerNo].getBalance(), borrow))
					{
						cout << "Loan approved." << endl << endl;
					}
					else
					{
						cout << "Loan not approved, maximum loan avaiable is " << ((acc[customerNo].getBalance())*2) << endl << endl;
					}
				case 7:
					custID = cust[customerNo].getID();
					for (int i = 0; i <= 4; i++)
					{
						cout << custID + 4 << endl;
						if ((cust[custID+i].getName() == "") && (i <= 4))
						{
							cust[custID+i].setName(cust[customerNo].getName());
							cust[custID + i].setID(custID + i);
							customerNo = custID+i;
							acc[customerNo].setPin(0);
							cout << "Enter new pin..." << endl;
							cin >> response;
							acc[customerNo].setPin(response);
							cout << endl << "New account has been set up for " << cust[customerNo].getName() << ", the account's ID is " << customerNo << endl << endl;
							break;
						}
						else if (i >= 4)
						{
							cout << "Customer has reached maximum number of accounts, a new account cannot be created." << endl << endl;
							break;
						}
					}
				}
			} while (response < 8);
		}
	} while (response < 9);
}