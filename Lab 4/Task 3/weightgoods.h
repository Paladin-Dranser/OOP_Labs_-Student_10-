#ifndef WEIGHT_H
#define WEIGHT_H

#include <string>
#include "goods.h"

using namespace std;

class WeightGoods : public Goods
{
	public:
		WeightGoods();
		WeightGoods(string name, double cost, double discount,
				    double weight);
		double getWeight() const;
		void setWeight(double weight);
		double getCost(double weight) const;
		void show() const;
	private:
		double weight;
};

#endif
