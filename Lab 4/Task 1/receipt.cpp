#include <iostream>
#include "receipt.h"

using namespace std;

Receipt::Receipt(string date, string type) :
	Document(date), type(type)
{
}

string Receipt::getType() const
{
	return type;
}

void Receipt::setType(string type)
{
	this->type = type;
}
