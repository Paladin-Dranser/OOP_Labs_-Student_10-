#include "event.h"

Event::Event()
{
}

Date Event::getDate() const
{
	return date;
}

std::istream & operator>>(std::istream & is, Event & ev)
{
	std::cout << "Enter a fact: ";
	is >> ev.fact;
	std::cout << "Enter a date:\n";
	is >> ev.date;
	return is;
}

std::ostream & operator<<(std::ostream & os, const Event & ev)
{
	os << "Fact: " << ev.fact << ". " << "Date: " << ev.date << std::endl;
	return os;
}
