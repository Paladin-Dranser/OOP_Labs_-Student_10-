#include <iostream>
#include <vector>
#include <fstream>
#include "circleposter.h"
#include "rectangleposter.h"
#include "client.h"
#include "master.h"
#include "boss.h"

using namespace std;

int main()
{
	std::vector<CirclePoster> circle;
	std::vector<RectanglePoster> rectangle;
	CirclePoster c1("AdvAAA", 5, 5, 10);
	RectanglePoster r1("AdvBBB", 5, 5, 10, 10);
	
	// регистрация плакатов
	circle.push_back(c1);
	rectangle.push_back(r1);

	cout << "Вывод плакатов:\n";
	for (auto & x : circle)
	{
		x.print();
		cout << endl;
	}
	for (auto & x : rectangle)
	{
		x.print();
		cout << endl;
	}

	// запись в файл
	fstream file;
	file.open("circle.txt", ios::out);

	if ( !file.is_open() )
		cout << "Ошибка открытия файла!\n";
	else
	{
		string str;
		double temp;
		str = circle[0].getText();
		file << str << ' ';
		temp = circle[0].getAreaCost();
		file << temp << ' ';
		temp = circle[0].getLetterCost();
		file << temp << ' ';
		temp = circle[0].getRadius();
		file << temp << endl;
	}
	file.close();

	file.open("rectangle.txt", ios::out);

	if ( !file.is_open() )
		cout << "Ошибка открытия файла!\n";
	else
	{
		string str;
		double temp;
		str = rectangle[0].getText();
		file << str << ' ';
		temp = rectangle[0].getAreaCost();
		file << temp << ' ';
		temp = rectangle[0].getLetterCost();
		file << temp << ' ';
		temp = rectangle[0].getWidth();
		file << temp << ' ';
		temp = rectangle[0].getHeight();
		file << temp << endl;
	}
	file.close();

	// считывание с файла в вектор (копируем в конец вектора)
	file.open("circle.txt", ios::in);
	if ( !file.is_open() )
		cout << "Ошибка открытия файла!\n";
	else
	{
		string str;
		double area_cost;
		double letter_cost;
		double radius;
		while ( file >> str >> area_cost >> letter_cost >> radius )
			circle.push_back( CirclePoster(str, area_cost, letter_cost, radius) );
	}
	file.close();

	file.open("rectangle.txt", ios::in);
	if ( !file.is_open() )
		cout << "Ошибка открытия файла!\n";
	else
	{
		string str;
		double area_cost;
		double letter_cost;
		double width;
		double height;
		while ( file >> str >> area_cost >> letter_cost >> width >> height )
			rectangle.push_back( RectanglePoster(str, area_cost, letter_cost, width, height) );
	}
	file.close();

	cout << "Вывод плакатов:\n";
	for (auto & x : circle)
	{
		x.print();
		cout << endl;
	}
	for (auto & x : rectangle)
	{
		x.print();
		cout << endl;
	}

	cout << "\nКлиент:\n";
	Client client("circle", 0);
	client.show();
	cout << endl;

	cout << "\nМастер:\n";
	vector<Poster *> poster;
	poster.push_back(&circle[0]);
	poster.push_back(&rectangle[0]);
	Master master(poster);
	master.show();	
	cout << endl;

	cout << "\nДиректор:\n";
	Boss boss(poster);
	boss.show();
	cout << endl;

	return 0;
}
