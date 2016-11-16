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
	int setName(int i);
	int setName(int i, string newName);
	void setID(int newID);
	int getID();
};

