// Ханойские башни, на 9 колец

#include <iostream>
using namespace std;

void ShowTowers(int arr1[], int arr2[], int arr3[], int end);
void Hanoi(int n, char from, char to, char temp, int arr1[], int arr2[], int arr3[], int end);
void Action(char KeyFrom, char KeyTo, int arrA[], int arrB[], int arrC[], int scale);

void main()
{
	const int size = 9;
	int towerStart[size], towerTemp[size], towerEnd[size];

	for (int i = size-1; i >=0; i--)
	{
		towerStart[i] = i+1;
		towerTemp[i] = 0;
		towerEnd[i] = 0;
	}

	ShowTowers(towerStart, towerTemp, towerEnd, size);
	Hanoi(size, 'A', 'C', 'B',towerStart,towerEnd, towerTemp,size);
	ShowTowers(towerStart, towerTemp, towerEnd, size);
}

void ShowTowers(int arr1[], int arr2[], int arr3[], int end)
{
	for (int i = 0; i < end; i++)
		cout << arr1[i] << "\t" << arr2[i] << "\t" << arr3[i] << endl;
	for (int i = 0; i < 20; i++)
		cout << "_";
	cout << endl;
	cout << 'A' << "\t" << 'B' << "\t" << 'C' << endl;
	for (int i = 0; i < 20; i++)
		cout << "_";
	cout << endl << endl;
}

void Hanoi(int n, char from, char to, char temp, int arr1[], int arr2[], int arr3[], int end)
{
	if (n>0){
		Hanoi(n - 1, from, temp, to, arr1, arr2, arr3, end);
		cout << "  " << from << " -> " << to << endl;
		Action(from, to, arr1, arr2, arr3, end); 
		ShowTowers(arr1, arr2, arr3, end);
		Hanoi(n - 1, temp, to, from, arr1, arr2, arr3, end);
	}
}

void Action(char KeyFrom, char KeyTo, int arrA[], int arrB[], int arrC[], int scale)
{
	int buffer;

	switch(KeyFrom)
	{
	case 'A':
		for (int i = 0; i < scale; i++)
		{
				if (arrA[i] != 0)
				{
					buffer = arrA[i];
					arrA[i] = 0;
					break;
				}
		}
		break;
	case 'B':
		for (int i = 0; i < scale; i++)
		{
			if (arrB[i] != 0)
			{
				buffer = arrB[i];
				arrB[i] = 0;
				break;
			}
		}
		break;

	case 'C':
		for (int i = 0; i < scale; i++)
		{
			if (arrC[i] != 0)
			{
				buffer = arrC[i];
				arrC[i] = 0;
				break;
			}
		}
		break;
	}

	int flag = 1;

	switch (KeyTo)
	{
	case 'A':
		for (int i = 0; i < scale; i++)
		{
			if (arrA[i])
			{
			arrA[i - 1] = buffer;
			flag = 0;
			break;
			}
		}
		if (flag)
			arrA[scale-1] = buffer;
		break;
	case 'B':
		for (int i = 0; i < scale; i++)
		{
			if (arrB[i])
			{
				arrB[i - 1] = buffer;
				flag = 0;
				break;
			}
		}
		if (flag)
			arrB[scale - 1] = buffer;
		break;

	case 'C':
		for (int i = 0; i < scale; i++)
		{
			if (arrC[i])
			{
				arrC[i - 1] = buffer;
				flag = 0;
				break;
			}
		}
		if (flag)
			arrC[scale - 1] = buffer;
		break;
	}
}