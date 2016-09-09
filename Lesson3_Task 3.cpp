/* Найти факториал неотрицательных чисел n */

#include <iostream>
using namespace std;

void main()
{
	int n = 0, count = 1;
	long long fact = 1;

	do {
		cout << "Please enter a digit to calculate the factorial: "; // предлагаем пользователю ввести число
		cin >> n;
		if (n <= 0) {												// уведомляем о не правильном вводе если введенно значение меньше или равно нулю
			cout << "please use digits above zero!" << endl;
		}
	} while (n <= 0);

	while (count <= n ) {										// высчитываем факториал числа				
		fact *= count;
		count++;
			}
	
	cout << "Factorial of digit " << n << " is equal to " << fact << endl;

}