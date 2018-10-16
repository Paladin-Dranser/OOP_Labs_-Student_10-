#include <iostream>
#include "invoice.h"

using namespace std;

Invoice::Invoice(string date, unsigned long id, string goods) :
	Document(date), id(id), goods(goods)
{
}

unsigned long Invoice::getId() const
{
	return id;
}

string Invoice::getGoods() const
{
	return goods;
}

void Invoice::setId(unsigned long id)
{
	this->id = id;
}

void Invoice::setGoods(string goods)
{
	this->goods = goods;
}
