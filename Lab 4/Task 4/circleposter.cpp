#include "circleposter.h"
#include <iostream>

using namespace std;

CirclePoster::CirclePoster(string advText, double area_cost, double letter_cost, double r) :
	Poster(advText, area_cost, letter_cost), radius(r)
{
}

double CirclePoster::getArea() const
{
	return 3.14 * radius * radius;
}

void CirclePoster::print() const
{
	cout << "Circle poster. Radius: " << radius << '.';
	Poster::print();
}

double CirclePoster::getPerimeter() const
{
	return 2.0 * 3.14 * radius;
}

double CirclePoster::getRadius() const
{
	return radius;
}
