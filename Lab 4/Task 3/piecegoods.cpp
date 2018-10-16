#include <iostream>
#include "piecegoods.h"

using namespace std;

PieceGoods::PieceGoods() :
	Goods(), amount(0)
{
}

PieceGoods::PieceGoods(string name, double cost, double discount,
					   unsigned int amount) :
	Goods(name, cost, discount), amount(amount)
{
}

unsigned int PieceGoods::getAmount() const
{
	return amount;
}

void PieceGoods::setAmount(unsigned int amount)
{
	this->amount = amount;
}

double PieceGoods::getCost(unsigned int amount) const
{
	return Goods::getCost() * amount;
}

void PieceGoods::show() const
{
	Goods::show();
	cout << " amount = " << amount;
}
