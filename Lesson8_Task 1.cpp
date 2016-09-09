// Написать функцию для перевода десятичного числа в систему счисления от 2 до 32.
 
#include <iostream>
using namespace std;

void calculator(int x, int sys);

void main()
{
	int digit, NumSys;
		
	cout << "\nPlease enter digit in 10 number system\n";
	cin >> digit;
	
	do
	{
		cout << "\nPlease enter number system from 2 till 32\n";
		cin >> NumSys;

		if (NumSys < 2 || NumSys > 32)
			cout << "\nWrong input\n";
	} while (NumSys < 2 || NumSys > 32);

	calculator(digit, NumSys);

	cout << char(90);

}

void calculator(int x, int sys)
{
	short array[10] = {};
	int counter = 0;
	for (counter = 0; x > 0; counter++)
	{
		array[counter] = x % sys;
		x /= sys;
	}

	cout << "Result digit in " << sys << " number system is ";

	for (counter--; counter >= 0; counter--)
	{
		if (array[counter] >= 10)
			cout << char(array[counter] + 55);
		else
			cout << array[counter];
	}
	cout << endl;

}

