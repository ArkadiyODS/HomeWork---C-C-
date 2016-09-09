#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	const int size = 50;
	char str[size];

	gets_s(str, size - 1);

	cout << "Used space = " << strlen(str) + 1 << "\nFree space = " << size - strlen(str) - 1 << endl;
}
