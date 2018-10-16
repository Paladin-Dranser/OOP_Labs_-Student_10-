#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

void display(multiset<char> & l)
{
	for (char element : l)
    { 
        cout << element << ' '; 
    } 
	cout << endl;
}

int main()
{
	multiset<char> first {'a', 'b', 'c', 'd', 'e'}; // пункт 1
	cout << "First:\n";
	display(first); // пункт 2
	// пункт 3
	multiset<char>::iterator it = first.begin();
	advance(it, 2); // смещаем итератор на 2 позиции вперёд
	first.erase(it); // удаляем 3 элемент
	it = first.begin();
	// замена элемента
	first.erase(it); // удаляем 1 элемент
	first.insert(it, 'w'); // вставляем новый элемент1 элемент
	// пункт 4
	cout << "First:\n";
	for (multiset<char>::iterator it = first.begin(); it != first.end(); ++it) 
	{
		cout << *it << ' ';
	}
	cout << endl;
	
	multiset<char> second {'f', 'g', 'j'}; // пункт 5
	// пункт 6
	int n = 2; // сколько удалить
	int del = 2; // после которого удалять
	multiset<char>::iterator begin_del = first.begin();
	advance(begin_del, del);
	multiset<char>::iterator end_del = begin_del;
	advance(end_del, n);
	first.erase(begin_del, end_del); // удаляем

	// вставляем 2 multiset в первый
	first.insert(second.begin(), second.end());

	// пункт 7
	cout << "First:\n";
	display(first);
	cout << "Second:\n";
	display(second);
	
	return 0;
}
