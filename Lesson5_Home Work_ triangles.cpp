#include <iostream>
using namespace std;


void main()
{
	setlocale(0, "");
	int size;
	do
	{
		system("cls");
		cout << "pls enter size (odd digit only) ";
		cin >> size;
	} while (size <= 0 || size % 2 == 0);

	// треугольник 1

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == 0 || i == size - 1 || i == j)
				cout << "* ";
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// треугольник 2

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == size - 1 || i == 0 || i == j)
				cout << "* ";
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// треугольник 3

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == size - 1 || i == size - 1 || i == size - 1 - j)
				cout << "* ";
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// треугольник 4

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == 0 || i == 0 || i == size - 1 - j)
				cout << "* ";
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// треугольник 5 (прямоугольный / заштрихованный)

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl << endl;

	// треугольник 6 (равнобедренный прямоугольный / заштрихованный)

	for (int i = 0; i <= size / 2; i++)
	{
		int j = 0;
		while (j < (size - 1) / 2 - i)
		{
			cout << "  ";
			j++;
		}
		do
		{
			cout << "* ";
			j++;
		} while (j <= (size - 1) / 2 + i);

		cout << endl;
	}
	cout << endl << endl;

	// треугольник 7 (равнобедренный прямоугольный )

	for (int i = 0; i <= size / 2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == (size - 1) / 2 || j == (size - 1) / 2 - i || j == (size - 1) / 2 + i)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// ромб

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == (size - 1) / 2 - j || i == (size - 1) / 2 + j || j == (size - 1) / 2 + i || j == 1.5 *(size - 1) - i)
				cout << "* ";
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// параллелепипед

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j >(size - 1) / 2 && i == 0 || j <= (size - 1) / 2 && i == size - 1 || j <= (size - 1) / 2 && i == size / 2 || i >(size - 1) / 2 && j == 0 || i > (size - 1) / 2 && j == (size - 1) / 2 || i <= (size - 1) / 2 && j == size - 1 || j == size / 2 - i || j == (size - 1) - i && i < size / 2 || j == 3 * (size - 1) / 2 - i)
			{
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;
}