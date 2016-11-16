#include "Customer.h"
#include<iostream>



Customer::Customer()
{
}


Customer::~Customer()
{
}

string Customer::getName()
{
	return name;
}

int Customer::setName(int i, string newName)
{
	name = newName;
	setID(i);

	return i;
}

int Customer::setName(int i)
{
	string newNameAppend;
	string newName;

	cout << "What is the customer's name?" << endl;

	cin >> newNameAppend;
	getline(cin, newName);
	newNameAppend.append(newName);

	name = newNameAppend;
	setID(i);

	return i;
}

void Customer::setID(int newID)
{
	ID = newID;
}

int Customer::getID()
{
	return ID;
}