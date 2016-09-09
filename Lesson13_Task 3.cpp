#include <iostream>
#include <stdio.h>

using namespace std;


void Recur(int * fact)
{
	for (int i = *fact - 1; i >1; i--)
		*fact *= i;
}

void main()
{
	int *x = new int;

	do {
		cout << "Please enter an x: " << endl;
		cin.clear();
		cin.sync();
		cin >> *x;
	} while (cin.fail());

	cout << "!" << *x << " = ";
	Recur(x);
	cout << *x << endl << endl;
}
