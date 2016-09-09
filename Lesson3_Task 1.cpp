/* Разработать*/

#include <iostream>
using namespace std;

void main()
{
	int quantity, counter=0;
	short location;
	char symbol;

	cout << "Please choose symbol: ";
	cin >> symbol;

	

	do {
		cout << "Please choose a quantity of symbols: ";
		cin >> quantity;
		if (quantity <= 0)
		{
			cout << "Please use numbers greater than zero\n";
		}
	} while (quantity <= 0);

	do {
		cout << "Please type 1 for vertical line or type 2 for horizontal line: ";
		cin >> location;
		if (location != 1 && location != 2)
		{
			cout << "You put wrong digit, please choose 1 or 2 only\n";
		}
	} while (location != 1 && location != 2);

	switch (location) {
		case 1:	
			while (counter < quantity) {
				cout << symbol << endl;
				counter++;
			}
			break;
		case 2:
			while (counter < quantity) {
				cout << symbol;
				counter++;
			}
			cout << endl;
			break;
		}

	
}