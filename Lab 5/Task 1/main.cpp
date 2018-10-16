#include "tarray.h"
#include "programminglesson.h"
#include <iostream>

using namespace std;

int main()
{
	TArray<ProgrammingLesson> arr(3);
	cout << "Enter elements of array:\n";
	arr.input();
	cout << endl;
	arr.output();
	cout << endl;

	return 0;
}
