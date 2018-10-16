#include "date.h"

Date::Date() : day_(1), month_(1), year_(1)
{
}

std::istream & operator>>(std::istream & is, Date & d)
{
	std::cout << "Enter a day: ";
	is >> d.day_;
	std::cout << "Enter a month: ";
	is >> d.month_;
	std::cout << "Enter an year: ";
	is >> d.year_;
	return is;
}

std::ostream & operator<<(std::ostream & os, const Date & d)
{
	os << d.day_ << '.' << d.month_ << '.' << d.year_ << std::endl;
	return os;
}

bool operator<(const Date & d1, const Date & d2)
{
	if (d1.year_ < d2.year_)
		return true;
	else if (d1.year_ == d2.year_ && d1.month_ < d2.month_)
		return true;
	else if (d1.year_ == d2.year_ && d1.month_ == d2.month_ && d1.day_ < d2.day_)
		return true;
	else
		return false;
}
