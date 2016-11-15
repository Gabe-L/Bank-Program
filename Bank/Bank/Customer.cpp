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