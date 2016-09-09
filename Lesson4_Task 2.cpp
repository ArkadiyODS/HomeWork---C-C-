/* Пользователь вводит с клавиатуры число - программа должна перевернуть число и вывести на экран. */

#include <iostream>
using namespace std;

void main()
{
	int Digit = 0, AntiDigit = 0;

	cout << "Please enter a number: ";
	cin >> Digit;

	for (; Digit != 0; Digit /= 10) {
		AntiDigit = (AntiDigit * 10) + (Digit % 10);
	}

	cout << AntiDigit << endl;

}
