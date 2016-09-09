/* Дано натуральное число от < 100 . Напишите программу, выводящую на экран кол-во цифр в этом числе и сумму этих цифр */

#include <iostream>
using namespace std;

void main()
{
	// задаем произвольное число от 1 до 100, т.к. ноль не относится к натуральным числам
	int a = 6;
	
	// производим подсчет
	if ((a % 100) < 10) {
		cout << "There is only one digit " << a % 100 << endl;
	}
	else {
		cout << "First digit:" << a / 10 << "\nSecond digit:" << a % 10 << "\nSumm = " << a / 10 + a % 10 << endl;
	}

}