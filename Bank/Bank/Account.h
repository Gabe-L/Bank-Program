#pragma once

using namespace std;

class Account
{
private:
	double balance;
	int pin;
	double overdraft;

public:
	Account();
	~Account();

	double getBalance();
	void setBalance(double amount);
	int getPin();
	void setPin(int newPin);
	void withdrawal(double withdraw);
	void withdrawal();
	double interest(double balance, double rate);
	bool loan(double balance, double borrow);
	double getOverdraft();
	void setOverdraft(double amount);
};

