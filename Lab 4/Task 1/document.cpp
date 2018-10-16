#include <iostream>
#include "document.h"

using namespace std;

Document::Document(string date) :
	date_of_formation(date)
{
}

string Document::getDate() const
{
	return date_of_formation;
}

void Document::setDate(string date)
{
	date_of_formation = date;
}
