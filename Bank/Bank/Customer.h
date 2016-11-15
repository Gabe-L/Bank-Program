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
	void setName(string newName);
	void setID(int newID);
	int getID();
};

