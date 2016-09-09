// Дан двухмерный массив с размерностью 3 х 4. Нати кол-во элементов равных нулю.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void main()
{
 	int array[3][4];
	int counter = 0;

	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array[i][j] = rand() % 10;
			cout << array[i][j] << " ";
			if (array[i][j] == 0)
			{
				counter++;
			}
		}

		cout << endl;
	}

	cout << "Array includes " << counter << " ZERO elements" << endl;
}