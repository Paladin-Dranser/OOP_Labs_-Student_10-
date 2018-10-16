#include <iostream>

#include "goods.h"

using namespace std;

Goods::Goods() :
	name(""), cost(0.0), discount(0.0)
{
}

Goods::Goods(string name, double cost, double discount) :
	name(name), cost(cost), discount(discount)
{
}

string Goods::getName() const
{
	return name;
}

double Goods::getCost() const
{
	return cost;
}

double Goods::getDiscount() const
{
	return discount;
}

void Goods::setName(string name)
{
	this->name = name;
}

void Goods::setCost(double cost)
{
	this->cost = cost;
}

void Goods::setDiscount(double discount)
{
	this->discount = discount;
}

void Goods::show() const
{
	cout << name << ": " << "cost = " << cost <<
	     " discount = " << discount;
}
