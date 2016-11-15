#pragma once
#include<string>

using namespace std;

class Account
{
private:
	int ID;
	double balance;
	int pin;

public:
	Account();
	~Account();

	double getBalance();
	void setBalance(double amount);
	int getPin();
	void setPin(int newPin);
	void withdrawal(double withdraw);
	void withdrawal();
	void setAccID(int newID);
};

