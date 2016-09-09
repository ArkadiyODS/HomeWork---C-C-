/* Вычисление квадрата любого, введенного числа */

#include <iostream>
using namespace std;

void main()
{
	float x = 0;

	// предлагаем пользователю ввести число
	cout << "Please enter digit\nX = ";
	cin >> x;

	x *= x;

	// выводим результат
	cout << "X2 = " << x << endl;
}