#ifndef RECTANGLEPOSTER_H
#define RECTANGLEPOSTER_H

#include "poster.h"
#include <string>

using namespace std;

class RectanglePoster : public Poster
{
	public:
		RectanglePoster(string advText, double area_cost, double letter_cost, double w, double h);
		virtual double getArea() const override final;
		virtual double getPerimeter() const override final;
		void print() const;
		double getWidth() const;
		double getHeight() const;
	private:
		double width;
		double height;
};

#endif
