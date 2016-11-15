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
	balance -= withdraw;
}

void Account::withdrawal()
{
	balance -= 10;
}

void Account::setAccID(int newID)
{
	ID = newID;
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