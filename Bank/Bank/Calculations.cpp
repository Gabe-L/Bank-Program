#include "Calculations.h"
#include "Account.h"
#include<iostream>

Account acc[10000];

Calculations::Calculations()
{
}


Calculations::~Calculations()
{
}

void Calculations::withdrawal(int customerNo)
{
	double withdraw;
	cout << "How much is being withdrawn?" << endl;
	cin >> withdraw;
	double balance = acc[customerNo].getBalance();
	balance -= withdraw;
	//return *balance;
}

double Calculations::deposit(double balance)
{
	double withdraw;
	cout << "How much is being deposited?" << endl;
	cin >> withdraw;
	balance += withdraw;
	return balance;
}