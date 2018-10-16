#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
	public:
		Date();
	public:
		friend std::istream & operator>>(std::istream & is, Date & d);
		friend std::ostream & operator<<(std::ostream & os, const Date & d);
		friend bool operator<(const Date & d1, const Date & d2);
	private:
		unsigned day_;
		unsigned month_;
		unsigned year_;
};

#endif
