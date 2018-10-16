#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	Fraction A;
	cout << "Введите дробь A:\n";
	A.input();
	Fraction B;
	cout << "Введите дробь B:\n";
	B.input();
	
	cout << "Вывод дроби А:\n";
	A.output();
	cout << "Вывод дроби B:\n";
	B.output();

	Fraction C;
	C = A + B;
	cout << "A + B = ";
	C.output();
	cout << endl;

	if (A != B)
		cout << "A != B\n";
	else
		cout << "A == B\n";
	
	//задание 2 (ввод/вывод) и задание 3 (исключение)
	Fraction f1;
	try
	{
		cin >> f1;
		cout << endl << f1 << endl;
	}
	catch (const char * msg)
	{
		cout << msg << endl;
	}

	return 0;
}
