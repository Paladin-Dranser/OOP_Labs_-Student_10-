#include <iostream>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

void display(queue<char> & l)
{
	queue<char> temp(l);
	while ( !temp.empty() )
	{
		cout << temp.front();
		temp.pop();
	}
	cout << endl;
}

int main()
{
	// пункт 1
	queue<char> first;
	first.push('a');
	first.push('b');
	first.push('c');
	first.push('d');
	first.push('e');
	// пункт 2
	cout << "First:\n";
	display(first);
	// пункт 3
	first.pop(); // удаляем первый элемент
	first.back() = 'w'; // замена последнего элемента
	// пункт 4 не выполняем через итераторы
	cout << "First:\n";
	display(first);
	// пункт 5	
	queue<char> second;
	second.push('f');
	second.push('g');
	second.push('j');
	// пункт 6
	int n = 2; // сколько удалить
	for (int i = 0; i < n; ++i)
		first.pop();
	// вставляем 2 queue в первый
	queue<char> temp(second);
	while ( !temp.empty() )
	{
		first.push( temp.front() );
		temp.pop();
	}
	// пункт 7
	cout << "First:\n";
	display(first);
	cout << "Second:\n";
	display(second);
	
	return 0;
}
