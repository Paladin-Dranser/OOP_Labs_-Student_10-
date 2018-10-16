#include <iostream>
#include "weightgoods.h"

using namespace std;

WeightGoods::WeightGoods() :
	Goods(), weight(0.0)
{
}

WeightGoods::WeightGoods(string name, double cost, double discount,
						 double weight) :
	Goods(name, cost, discount), weight(weight)
{
}

double WeightGoods::getWeight() const
{
	return weight;
}

void WeightGoods::setWeight(double weight)
{
	this->weight = weight;
}

double WeightGoods::getCost(double weight) const
{
	return Goods::getCost() * weight;
}

void WeightGoods::show() const
{
	Goods::show();
	cout << " weight = " << weight;
}
