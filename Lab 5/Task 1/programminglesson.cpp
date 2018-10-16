#include "programminglesson.h"

using namespace std;

ProgrammingLesson::ProgrammingLesson()
{
}

istream & operator>>(istream & is, ProgrammingLesson & pl)
{
	cout << "Enter a day of week: ";
	is >> pl.day_of_week;
	cout << "Enter begin time of lesson: ";
	is >> pl.begin_time;	
	cout << "Enter end time of lesson: ";
	is >> pl.end_time;	
	cout << "Enter a teacher's surname: ";
	is >> pl.teacher_surname;

	return is;
}

ostream & operator<<(ostream & os, const ProgrammingLesson & pl)
{
	os << "Day of week is " << pl.day_of_week << endl;
	os << "Begin time of lesson: " << pl.begin_time << endl;
	os << "End time of lesson: " << pl.end_time << endl;
	os << "Teacher's surname: " << pl.teacher_surname;

	return os;
}
