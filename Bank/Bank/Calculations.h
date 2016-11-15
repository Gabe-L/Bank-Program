#pragma once
#include <string>

using namespace std;

class Calculations
{
public:
	Calculations();
	~Calculations();
	void withdrawal(int customerNo);
	double deposit(double balance);
};

