#ifndef POSTER_H
#define POSTER_H

#include <string>
using namespace std;

class Poster
{
	public:
		Poster(string advText, double area_cost, double letter_cost);
		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;
		void print() const;
		double getAreaCost() const;
		double getLetterCost() const;
		double getCost() const;
		string getText() const;
	protected:
		string advText;
		double area_cost;
		double letter_cost;
};

#endif
