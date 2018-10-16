#ifndef BASKET_H
#define BASKET_H

#include <vector>

#include "piecegoods.h"
#include "weightgoods.h"

using namespace std;

class Basket
{
	public:
		double getAllCost() const;
		void show() const;
		void addPiece(PieceGoods goods);
		void addWeight(WeightGoods goods);
		void clean();
	private:
		vector<PieceGoods> piece;
		vector<WeightGoods> weight;	
};

#endif
