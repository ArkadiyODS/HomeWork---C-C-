#include <iostream>
using namespace std;


void main()
{
	int monthdays = 31;
	
	cout << "January 2014" << endl << endl;

	cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	

	for (int x = -1; x <= monthdays; x++)
	{
		for (int j = 0; j < 7; j++)
		{
			if ( x > 0 && x <= monthdays )
			{
				cout << x << "\t";
			}
			else
			{
				cout << " \t";
			}
			x++;
		}
		cout << endl;
	} 
	cout << endl << endl;
}