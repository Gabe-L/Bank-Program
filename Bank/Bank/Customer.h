#pragma once
#include<string>

using namespace std;

class Customer
{
private:
	string name;

public:
	Customer();
	~Customer();

	string getName();
	void setName(string newName);

};

