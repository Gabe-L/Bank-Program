#pragma once
#include<string>

using namespace std;

class Customer
{
private:
	string name;
	int ID;

public:
	Customer();
	~Customer();

	string getName();
	void setCust(string newName);
	void setCust(int newID);

};

