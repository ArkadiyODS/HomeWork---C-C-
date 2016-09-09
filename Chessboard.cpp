#include <iostream>
using namespace std;

void main ()
{
	unsigned char symbol = 219;
	const int lenght_line = 8;
	int j, i = lenght_line;

	while ( i--)
	{
		j = lenght_line;

		if ( i % 2 )
		{
			while ( j-- )
			{
			    if ( j % 2 )
			    {
				cout << symbol << symbol;
			    }
		  	    else
			    {
				cout <<"  ";
			    }
			}

		}
		else
		{
			while ( j-- )
			{
			    if ( j % 2 )
			    {
				cout <<"  ";
			    }
		  	    else
			    {
				cout << symbol << symbol;
			    }
			}

		}
		cout << endl;

	}

}