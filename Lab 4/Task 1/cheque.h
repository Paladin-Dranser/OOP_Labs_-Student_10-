#ifndef CHEQUE_H
#define CHEQUE_H

#include <string>
#include "document.h"

using namespace std;

class Cheque : public Document
{
	public:
		Cheque(string date, double cost);
		double getCost() const;
		void setCost(double cost);
	private:
		double cost;
};

#endif
