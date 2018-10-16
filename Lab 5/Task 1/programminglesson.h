#ifndef	LESSON_H 
#define LESSON_H

#include <string>
#include <iostream>

using namespace std;

class ProgrammingLesson 
{
	public:
		ProgrammingLesson();
	public:
		friend istream & operator>>(istream & is, ProgrammingLesson & pl);
		friend ostream & operator<<(ostream & os, const ProgrammingLesson & pl);
	private:
		string day_of_week;
		string begin_time;
		string end_time;
		string teacher_surname;
};

#endif
