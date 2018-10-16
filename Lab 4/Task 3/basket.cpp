#include <iostream>
#include "basket.h"

using namespace std;

double Basket::getAllCost() const
{
	double all_cost = 0.0;
	for (auto x : piece)
		all_cost += x.getCost(x.getAmount());
	for (auto x : weight)
		all_cost += x.getCost(x.getWeight());
	
	return all_cost;
}

void Basket::show() const
{
	for (auto x : piece)
	{
		x.show();
		cout << endl;
	}
	for (auto x : weight)
	{
		x.show();
		cout << endl;
	}
}

void Basket::addPiece(PieceGoods goods)
{
	piece.push_back(goods);
}

void Basket::addWeight(WeightGoods goods)
{
	weight.push_back(goods);
}

void Basket::clean()
{
	piece.clear();
	weight.clear();
}
