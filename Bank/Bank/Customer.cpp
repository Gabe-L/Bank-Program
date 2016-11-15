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

void Customer::setCust(string newName)
{
	name = newName;
}

void Customer::setCust(int newID)
{
	ID = newID;
}