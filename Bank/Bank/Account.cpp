#include "Account.h"
#include<iostream>



Account::Account()
{
	balance = 10;
}


Account::~Account()
{
}

double Account::getBalance()
{
	return balance;
}

void Account::setAcc(double amount)
{
	balance = amount;
}

int Account::getPin()
{
	return pin;
}

void Account::setAcc(int newPin)
{
	pin = newPin;
}

string Account::getAccName()
{
	return accName;
}

void Account::setAcc(string newName)
{
	accName = newName;
}

void Account::withdrawal()
{
	double withdraw;
	cout << "How much is being withdrawn?" << endl;
	cin >> withdraw;
	balance -= withdraw;
	//return *balance;
}