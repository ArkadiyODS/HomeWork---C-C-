/* Напишите программу, которая переводит гривны в $,евро и рубли */

#include <iostream>
using namespace std;

void main()
{
	// задаем переменные
	float uah, UsdEx, RubEx, EurEx;
	
	// задаем курс для каждой из валют

	UsdEx = 8.235;
	RubEx = 0.247;
	EurEx = 11.296;

	// предлагаем пользователю ввести сумму в гривнах

	cout << "Please input your summ in UAH\n" << "UAH = ";
	cin >> uah;

	// осуществляем проверку на недопустимые значения и выводим результат

	if (uah <= 0)
	{
		cout << "Sorry, but your input was incorrect\n";
	}
	else
	{
		cout << "USD = " << uah / UsdEx << endl;
		cout << "RUB = " << uah / RubEx << endl;
		cout << "EUR = " << uah / EurEx << endl;
	}
}