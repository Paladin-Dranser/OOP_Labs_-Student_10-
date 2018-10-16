#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include "date.h"

class Event
{
	public:
		Event();
		Date getDate() const;
	public:
		friend std::istream & operator>>(std::istream & is, Event & ev);
		friend std::ostream & operator<<(std::ostream & os, const Event & ev);
	private:
		std::string fact;
		Date date;
};

#endif
