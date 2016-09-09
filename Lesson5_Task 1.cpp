/* Вывести на экран все вещественные числа от 2 до 1000. Число 2 и число 1 не являются таковыми */

#include <iostream>
using namespace std;

void main()
{
	for (int i = 3, count; i <= 1000; i++)
	{
		count = 0;
		for (int j = 2 ; j < i; j++) {
			if (i%j==0)	{
				count++;
			}
		}

		if (count == 0)	{
			cout << i << "\t";
		}

	}

	cout << endl;	

}