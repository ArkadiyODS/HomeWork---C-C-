// Данн массив случайных чисел в диапазоне от -20 до +20 элементов. Функция должна найти крайние отрицательные значения и отсортировать массив между ними


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template < class T> int SearchFirst(T array[], int size);
template < class T> int SearchLast(T array[], int size);
template < class T> void FillArray(T array[], int size);
template < class T> void ShowArray(T array[], int size);
template < class T> void Sort(T array[], int first, int last);

void main()
{
	const int column = 10;
	int massive[column];
	int start, end;
	
	srand(time(NULL));

	FillArray(massive, column);
	ShowArray(massive, column);

	start = SearchFirst(massive, column);
	end = SearchLast(massive, column);

	if (start == end)
		(start < 0) ? cout << "\nNo negative elements in massive\n\n" : cout << "\nThere is only one negative element in massive\n\n";
	else
	{
		Sort(massive, start, end);
		ShowArray(massive, column);
	}

}

template < class T> int SearchFirst(T array[], int size)
{
	int index = - 1;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			index = i;
			break;
		}
	}
	return index;
}

template < class T> int SearchLast(T array[], int size)
{
	int index = -1;

	for (int i = size -1; i >= 0; i--)
	{
		if (array[i] < 0)
		{
			index = i;
			break;
		}
	}
	return index;
}

template < class T> void FillArray(T array[], int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 40 - 20;
}

template < class T> void ShowArray(T array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << "  ";
	cout << endl << endl;
}

template < class T> void Sort(T array[], int first, int last)
{
	int index;

	for (int i = first + 1; i < last; i++)
	{
		index = i;
		for (int j = i + 1; j < last; j++)
		if (array[j] < array[index])
			index = j;
		if (index != i)
			swap(array[i], array[index]);
	}
}