/* Данн массив целых чисел от 1 до 20.
  1) Функция должна произвольно разбрасывать элементы массива.
  2) Необходимо создать случайное число из этого диапазона.
  3) Необходимо найти это число в массиве и отсортировать по убыванию все что слева от числа и по возрастанию все что справа.
 */


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void AddNumbers(int array[], int format);
void ShowArray(int array[], int format);
void MixArray(int array[], int format);
int Search(int array[], int format, int number); 
void Sort(int array[], int start, int end, bool key);

void main()
{
	const int size = 20;
	int arr[size]; 
	int x, position;

	srand(time(NULL));

	x = rand() % 20 + 1;

	AddNumbers(arr, size);
	ShowArray(arr, size);
	MixArray(arr, size);
	ShowArray(arr, size); 
	position = Search(arr, size, x);

	cout << "Random generated number = " << x << endl << endl;

	if (position > 0 && position < (size - 1))
	{
		Sort(arr, 0, position, 1);
		Sort(arr, (position + 1), size, 0);
	}
	else if (position < 0)
		cout << "\n\t\tError! Random generated number is out of range\n\n";
	else if (position == 0)
		Sort(arr, (position + 1), size, 0);
	else if (position == size - 1)
		Sort(arr, 0, position, 1);
	else
		cout << "\n\t\tFatal error!\n\n";

	ShowArray(arr, size);

}

void AddNumbers(int array[], int format)
{
	for (int i = 0; i < format; i++)
		array[i] = i + 1;
}

void ShowArray(int array[], int format)
{
	for (int i = 0; i < format; i++)
		cout << array[i] << "  ";
	cout << endl << endl;
}

void MixArray(int array[], int format)
{
	int Mix;
	for (int i = 0; i < format; i++)
	{
		Mix = rand() % 20;
		if (Mix != i)
			swap(array[i], array[Mix]);
	}
}

void Sort(int array[], int start, int end, bool key)
{
	int index;

	for (int i = start; i < end; i++)
	{
		index = i;
		for (int j = i + 1; j < end; j++)
		if ((key) ? array[j] < array[index] : array[j] > array[index])
			index = j;
		if (index != i)
			swap(array[i], array[index]);
	}
}

int Search(int array[], int format, int number)
{
	int index = -1;

	for (int i = 0; i < format; i++)
	{
		if (array[i] == number)
		{
			index = i;
			break;
		}
	}
	return index;
}