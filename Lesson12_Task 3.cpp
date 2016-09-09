// даны два массива. Нужно создать третий:

#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>
using namespace std;


 
void FileMass(int *pa, int size);
void FileMassZerro(int *pa, int size);
void ShowMass(int *pa, int size);
void SortMass(int *pa, int size);
void JoinMass(int *pa, int *pb, int *pc, int sizeA, int sizeB);
void EqualElements(int *pa, int *pb, int *pc, int sizeA, int sizeB);
void MissingElements(int *pa, int *pb, int *pc, int sizeA, int sizeB);


void main()
{
	const int sizeA = 5;
	const int sizeB = 8;

	int A[sizeA], B[sizeB], C[sizeA + sizeB] = {};
		
	FileMass(A, sizeA);	
	Sleep(1000);
	FileMass(B, sizeB);
	ShowMass(A, sizeA);
	ShowMass(B, sizeB);

// собираем элементы обоих массивов
	cout << "All elements A + B" << endl;
	JoinMass(A, B, C, sizeA, sizeB);
	ShowMass(C, (sizeA + sizeB));

// обнуляем
	FileMassZerro(C, (sizeA + sizeB));

// собираем общие элементы обоих массивов
	cout << "Combined elements A & B" << endl;
	EqualElements(A, B, C, sizeA, sizeB);
	ShowMass(C, (sizeA + sizeB));

// обнуляем
	FileMassZerro(C, (sizeA + sizeB));

// собираем  элементы А которые не включаются в В
	cout << "A elements not aveilable in B" << endl;
	MissingElements(A, B, C, sizeA, sizeB);
	ShowMass(C, (sizeA + sizeB));

// обнуляем
	FileMassZerro(C, (sizeA + sizeB));

// собираем  элементы В которые не включаются в А
	cout << "B elements not aveilable in A" << endl;
	MissingElements(B, A, C, sizeB, sizeA);
	ShowMass(C, (sizeA + sizeB));

// обнуляем
	FileMassZerro(C, (sizeA + sizeB));

// собираем  элементы А и В которые не являются общими
	cout << "Unshared elements in A & B" << endl;
	MissingElements(A, B, C, sizeA, sizeB);
	int *pc = C + sizeA + sizeB -1;
	while (*pc == 0)
		pc--;
	MissingElements(B, A, (pc+1), sizeB, sizeA);
	ShowMass(C, (sizeA + sizeB));

}

void FileMass(int *pa, int size)
{
	srand((time(NULL)));
	for (int i = 0; i < size; i++, pa++)
		*pa = rand() % 10;
}

void FileMassZerro(int *pa, int size)
{
	for (int i = 0; i < size; i++, pa++)
		*pa = 0;
}

void ShowMass(int *pa, int size)
{
	for (int i = 0; i < size; i++, pa++)
		cout << setw(3) << *pa;
	cout << endl << endl;
}

void SortMass(int *pa, int size)
{
	for (int i = 0; i < size; i++, pa++)
	{
		for (int j = 1; j < size - i; j++)
		if (*pa > *(pa + j))
			swap(*pa, *(pa + j));
	}
}

void JoinMass(int *pa, int *pb, int *pc, int sizeA, int sizeB)
{
	for (int i = 0; i < sizeA; i++, pa++, pc++)
		*pc = *pa;
	for (int i = 0; i < sizeB; i++, pb++, pc++)
		*pc = *pb;
}

void EqualElements(int *pa, int *pb, int *pc, int sizeA, int sizeB)
{
	int *flag;
	flag = pb;

	for (int i = 0; i < sizeA; i++, pa++)
	{
		pb = flag;
		for (int j = 0; j < sizeB; j++, pb++)
		if (*pa == *pb)
		{
			*pc = *pa;
			pc++;
		}
	}
}

void MissingElements(int *pa, int *pb, int *pc, int sizeA, int sizeB)
{
	int *flag;
	bool key;
	flag = pb;

	for (int i = 0; i < sizeA; i++, pa++)
	{
		pb = flag;
		key = true;
		for (int j = 0; j < sizeB; j++, pb++)
		if (*pa == *pb)
			key = false;
		if (key)
		{
			*pc = *pa;
			pc++;		
		}
	}
}
