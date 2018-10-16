#ifndef RECEIPT_H
#define RECEIPT_H

#include <string>
#include "document.h"

using namespace std;

class Receipt : public Document
{
	public:
		Receipt(string date, string type);
		string getType() const;
		void setType(string type);
	private:
		string type;
};

#endif
