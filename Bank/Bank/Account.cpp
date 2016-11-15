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