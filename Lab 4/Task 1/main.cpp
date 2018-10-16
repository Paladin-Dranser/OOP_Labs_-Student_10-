#include <iostream>
#include <string>

#include "invoice.h"
#include "cheque.h"
#include "receipt.h"

using namespace std;

void display(Invoice & invoice, Cheque & cheque, Receipt & receipt)
{
	cout << "Квитанция: " << receipt.getType() <<
		 ' ' << receipt.getDate() << endl;
	cout << "Чек: " << cheque.getCost() << ' ' << cheque.getDate() << endl;
	cout << "Накладная: " << invoice.getId() <<
	     ' ' << invoice.getGoods() << ' ' << invoice.getDate() << endl;
}

int main()
{
	Invoice invoice("31.12.2018", 1234567, "apple");
	Cheque cheque("01.01.2018", 134.43);
	Receipt receipt("25.12.2018", "налоговая");

	display(invoice, cheque, receipt);

	cout << "\nИзменили данные при помощи методов set\n\n";
	receipt.setDate("31.12.2019");
	receipt.setType("почтовая");
	cheque.setCost(431.43);
	invoice.setId(7654321);

	display(invoice, cheque, receipt);

	return 0;
}
