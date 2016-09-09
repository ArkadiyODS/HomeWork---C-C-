/* Пользователь вводит с клавиатуры целое число - программа должна вывести на экран сумму его цифр. */

#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int Digit = 0;
	float Summ = 0;

	cout << "Please enter an integer number: ";
	cin >> Digit;

	for (; Digit != 0; Digit /= 10) {
		Summ += (Digit % 10);
	}

	//  Берем модуль суммы во избежании минусовых значений в случае ввода отрицательного числа пользователем
	cout << "Summ of all digits in this number is equal to " << fabsf(Summ) << endl;
}
