/* Пользователь вводит с клавиатуры число - программа должна показать сколько в данном числе цифр. */

#include <iostream>
using namespace std;

void main()
{
	int n = 0, count = 1;

	cout << "Please enter a number: ";
	cin >> n;

	for (; n / 10 != 0; count++, n /= 10);

	(count == 1) ? cout << "There is only ONE digit in this number!" << endl : cout << "There are " << count << " digits in this number" << endl;

}