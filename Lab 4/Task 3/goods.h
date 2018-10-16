#ifndef GOODS_H
#define GOODS_H

#include <string>
using namespace std;

class Goods
{
	public:
		Goods();
		Goods(string name, double cost, double discount);
		string getName() const;
		double getCost() const;
		double getDiscount() const;
		void setName(string name);
		void setCost(double cost);
		void setDiscount(double discount);
		void show() const;
	private:
		string name;
		double cost;
		double discount;	
};

#endif
