#include <iostream>
#include "client.h"

using namespace std;

Client::Client(string name, unsigned id) :
	name(name), id(id)
{
}

void Client::show() const
{
	cout << "Квитанция: " << name << id;
}
