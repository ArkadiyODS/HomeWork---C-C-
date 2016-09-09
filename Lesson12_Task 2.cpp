// Два упорядоченных по возрастанию массива. Нужно упорядочить по возрастанию третий котрый включит в себя оба

#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>
using namespace std;


 
void FileMass(int *pa, int size);
void ShowMass(int *pa, int size);
void SortMass(int *pa, int size);
void JoinMass(int *pa, int *pb, int *pc, int sizeA, int sizeB);


void main()
{
	const int sizeA = 10;
	const int sizeB = 8;

	int A[sizeA], B[sizeB], C[sizeA + sizeB];
	
	FileMass(A, sizeA);	
	Sleep(1000);
	FileMass(B, sizeB);
	SortMass(A, sizeA);
	ShowMass(A, sizeA);
	SortMass(B, sizeB);
	ShowMass(B, sizeB);
	JoinMass(A, B, C, sizeA, sizeB);
	SortMass(C, (sizeA + sizeB));
	ShowMass(C, (sizeA + sizeB));

}

void FileMass(int *pa, int size)
{
	srand((time(NULL)));
	for (int i = 0; i < size; i++, pa++)
		*pa = rand() % 100;
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