#include <iostream>
#include "cheque.h"

using namespace std;

Cheque::Cheque(string date, double cost) :
	Document(date), cost(cost)
{
}

double Cheque::getCost() const
{
	return cost;
}

void Cheque::setCost(double cost)
{
	this->cost = cost;
}
