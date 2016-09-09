/* Введите 3 числа и выведите на экран значение суммы и произведения этих чисел */

#include <iostream>
using namespace std;

void main()
{
	float a = 0, b = 0,  c = 0;

	// предлагаем пользователю ввести числa и считываем результаты

	cout << "Please enter three digits\na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	// выводим результат сложения и умножения

	cout << "a + b + c = " << a + b + c << "\na * b * c = " << a*b*c << endl;
}