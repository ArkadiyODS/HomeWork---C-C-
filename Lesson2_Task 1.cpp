/* напишите программу проверяющую число введеное с клавиатуры на четность */

#include <iostream>
using namespace std;

void main()
{
	// задаем переменную типа int
	int a = 0;

	// предлагаем пользователю ввести число
	cout << "Please enter a digit\n";
	cin >> a;

	// проверяем введенные данные
	if (!a)	{
		cout << "Wrong input or zero\n";
	}
	else {
		// проверяем четность числа и выводим результат
		if (a % 2 != 0) {
			cout << "Odd number\n";
		}
		else {
			cout << "Even number\n";
		}
	}

}