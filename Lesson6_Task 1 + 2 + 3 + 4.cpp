// Массив 10 элементов вводится пользователем с клавиатуры

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

	// Написать программу, которая выводит содержание массива наоборот.

	cout << "Back order: ";

	for (int i = size - 1; i >= 0; i--)
	{
		cout << ar[i] << " ";
	}
	cout << endl;

	// Написать программу, которая находит сумму четных и сумму нечетных элементов массива.

	int SumOdd = 0, SumEven = 0;


	for (int i = 0; i < size; i++)
	{
		if (ar[i] % 2)
		{
			SumOdd += ar[i];
		}
		else
		{
			SumEven += ar[i];
		}
	}
	
	cout << "Sum of evens is " << SumEven << endl << "Sum of odds is " << SumOdd << endl;

	// Написать программу, которая находит в массиве число повторяющееся два и более раз и выводит его на экран.
	
	int check;

	for (int i = 0; i < size - 1; i++)
	{
		check = ar[i];

		for (int j = i + 1; j < size; j++)
		{
			if (check == ar[j])
			{
				cout << ar[j] << " repeats" << endl;
				break;
			}
		}
	
	}

	cout << endl;

	// Написать программу, которая находит в массиве самое маленькое нечетное число и выводит его на экран.

	int MinOdd;
	int counter = size;

	for (int i = 0; i < size; i++)
	{
		if (ar[i] % 2 && ar[i])
		{
			MinOdd = ar[i];
			counter = i;
			break;
		}
	}

	if (counter < size)
	{
		for (int i = counter; i < size; i++)
		{
			if (ar[i] % 2 && ar[i])
			{
				if (MinOdd > ar[i])
				{
					MinOdd = ar[i];
				}
			}
		}

		cout << "Minimal odd digit is " << MinOdd << endl << endl;
	}
	else
	{
		cout << "No odds in massive." << endl;
	}

	

}