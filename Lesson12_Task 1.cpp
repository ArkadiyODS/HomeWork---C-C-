// Поменять местами четные и нечетные элементы массива

#include <iostream>
#include <time.h>
using namespace std;

const int size = 10;
 
void FileMass(int *pa);
void ShowMass(int *pa);
void ChangeMass(int *pa);

void main()
{
	int ar[size];

	FileMass(ar);	
	ShowMass(ar);
	ChangeMass(ar);
	ShowMass(ar);	 
}

void FileMass(int *pa)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++, pa++)
		*pa = rand() % 100;
}

void ShowMass(int *pa)
{
	for (int i = 0; i < size; i++, pa++)
		cout << *pa << "\t";
	cout << endl << endl;
}

void ChangeMass(int *pa)
{
	int temp;
	if (size > 1)
	{
		for (int i = 0; i < size - 1; i+=2, pa+=2)
		{
			temp = *pa;
			*pa = *(pa +1);
			*(pa + 1) = temp;
		}
	}
}