#include <iostream>
#include "event.h"
#include "tarray.h"

int main()
{
	TArray<Event> arr(3);
	std::cout << "Enter an array:\n";
	arr.input();
	arr.dateBubble();
	std::cout << "\n\nDisplay:\n\n";
	arr.output();

	return 0;
}
