#ifndef PIECE_H
#define PIECE_H

#include <string>
#include "goods.h"

using namespace std;

class PieceGoods : public Goods
{
	public:
		PieceGoods();
		PieceGoods(string name, double cost, double discount,
				   unsigned int amount);
		unsigned int getAmount() const;
		void setAmount(unsigned int amount);
		double getCost(unsigned int amount) const;
		void show() const;
	private:
		unsigned int amount;
};

#endif
