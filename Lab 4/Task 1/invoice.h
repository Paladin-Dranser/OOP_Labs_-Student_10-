#ifndef INVOICE_H
#define INVOICE_H

#include "document.h"
#include <string>

using namespace std;

class Invoice : public Document
{
	public:
		Invoice(string date, unsigned long id, string goods);
		unsigned long getId() const;
		string getGoods() const;
		void setId(unsigned long id);
		void setGoods(string goods);
	private:
		unsigned long id;
		string goods;
};

#endif
