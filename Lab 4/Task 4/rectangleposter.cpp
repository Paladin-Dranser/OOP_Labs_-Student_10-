#include "rectangleposter.h"
#include <iostream>

using namespace std;

RectanglePoster::RectanglePoster(string advText, double area_cost, double letter_cost, double w, double h) :
	Poster(advText, area_cost, letter_cost), width(w), height(h)
{
}

double RectanglePoster::getArea() const
{
	return width * height;
}

void RectanglePoster::print() const
{
	cout << "Rectangle poster. Size: " << width << 'x' << height << '.';
	Poster::print();
}

double RectanglePoster::getPerimeter() const
{
	return (width + height) * 2.0;
}

double RectanglePoster::getWidth() const
{
	return width;
}

double RectanglePoster::getHeight() const
{
	return height;
}
