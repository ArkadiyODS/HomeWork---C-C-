// Данн массив размерностью 10 элементов. Функция должна отсортировать по убыванию и по возрастанию при поммощи передаваемой управляющей переменной (по умолчанию = 1)


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template < class T> void sort(T array[], int size, bool key = 1);

template < class T>
void FillArray(T array[], int size);

template < class T>
void ShowArray(T array[], int size);

void main()
{
	const int column = 10;
	int massive[column];

	srand(time(NULL));

	FillArray(massive, column);

	ShowArray(massive, column);

	sort(massive, column);

	ShowArray(massive, column);

	sort(massive, column, 0); // передаем управляющую переменную

	ShowArray(massive, column);



}


template < class T> void sort(T array[], int size, bool key)
{
	int index;

	for (int i = 0; i < size; i++)
	{
		index = i;
		for (int j = i + 1; j < size; j++)
		if ((key) ? array[j] < array[index] : array[j] > array[index])
			index = j;
		if (index != i)
			swap(array[i], array[index]);
	}

}

template < class T> void FillArray(T array[], int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 100;
}

template < class T> void ShowArray(T array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << "  ";
	cout << endl << endl;
}