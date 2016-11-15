#pragma once
#include<string>

using namespace std;

class Account
{
private:
	double balance;
	int pin;
	string accName;

public:
	Account();
	~Account();

	double getBalance();
	void setAcc(double amount);
	int getPin();
	void setAcc(int newPin);
	string getAccName();
	void setAcc(string newName);
	void withdrawal();
};

