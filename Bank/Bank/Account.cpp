#include "Account.h"
#include<iostream>



Account::Account()
{
	balance = 10;
	overdraft = 0;
}


Account::~Account()
{
}

double Account::getBalance()
{
	return balance;
}

void Account::setBalance(double amount)
{
	balance = amount;
}

int Account::getPin()
{
	return pin;
}

void Account::setPin(int newPin)
{
	pin = newPin;
}

void Account::withdrawal(double withdraw)
{
	if (withdraw > (balance + overdraft))
	{
		cout << "Cannot withdraw that much." << endl;
	}
	else
	{
		balance -= withdraw;
	}
}

void Account::withdrawal()
{
	if (10 > (balance + overdraft))
	{
		cout << "Cannot withdraw that much." << endl;
	}
	else
	{
		balance -= 10;
	}
}

double Account::interest(double balance, double rate)
{
	double interest;

	if (balance <= 0)
	{
		interest = 0;
	}
	else
	{
		interest = balance * rate;
	}
	return interest;
}

bool Account::loan(double balance, double borrow)
{
	if (borrow <= (balance * 2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Account::getOverdraft()
{
	return overdraft;
}

void Account::setOverdraft(double amount)
{
	overdraft = amount;
}