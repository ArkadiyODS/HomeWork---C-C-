#include <iostream>
using namespace std;


void main()
{
	int const size = 10;
	int ar[size];
	 
	 
	cout << "Please enter digits one by one:" << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> ar[i];
	}

	cout << "Back order: ";

	for (int i = size-1; i >=0 ; i--)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}