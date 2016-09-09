/* Найти сумму всех целых нечетных чисел в диапазоне указанном пользователем */

#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int a, b, start, end;
	int summ = 0;

	cout << "Please choose start and end of range: "; // предлагаем пользователю ввести начало и конец диапазона 
	cin >> a >> b;

	start = (a <= b) ? a : b;	// осуществляем преобразование введенных данных в начало и конец диапазона
	end = (a >= b) ? a : b;

	while (start <= end) {		// осуществляем проверку на нечетность и суммирование
		if (start % 2 != 0) {
			summ += fabsf((float)start); // для учета отрицательных чисел используем функцию приведения по модулю fabsf
		}
		start++;
	}
	
	cout << "Summ of odds is equal to " << summ << endl;

}