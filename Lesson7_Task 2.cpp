// Дана квадратная матрица порядка n. Найти наибольшее из значений элементов согласно вариантов из ДЗ

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;


void main()
{
	int const n = 9;
 	int array[n][n];
	int max;

	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = rand() % 100;
			cout << setw(3) << array[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
		cout << setw(3) << "* ";

	cout << endl << endl;
	
	// Вариант (а)	
	
	max = array[0][0];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

	// Вариант (б)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ( i >= j )
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;
	
	// Вариант (в)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i && j < n - i)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << "Max = " << max << endl << endl;

	// Вариант (г)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= (n -1) - i && j <= i )
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

	// Вариант (д)

	max = array[0][0];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j >= (n - 1) - i && j <= i) || (j >= i && j < n - i))
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;


	// Вариант (e)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i >= (n - 1) - j && i <= j) || (i >= j && i < n - j))
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

	// Вариант (ж)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j && i < n - j)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

	// Вариант (з)

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= (n - 1) - j && i <= j)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;


	// Вариант (и)	

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < n - i)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

	// Вариант (к)	

	max = array[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= (n - 1) - j)
			{
				cout << setw(3) << array[i][j];
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
			else
				cout << setw(3) << "  ";
		}
		cout << endl;
	}

	cout << endl << "Max = " << max << endl << endl;

}