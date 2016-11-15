#include "Customer.h"



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

void Customer::setName(string newName)
{
	name = newName;
}

void Customer::setID(int newID)
{
	ID = newID;
}

int Customer::getID()
{
	return ID;
}