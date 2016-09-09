// 

#include <iostream>
#include
using namespace std;

double okruglenie(double znachenie, int stepenokruglenia);

void main()
{
	int deciatki;
	long perehod;
	double chislo;

	do{
		cout << "Please enter real number: ";
		cin >> chislo;
		cout << "Please enter amount of numbers after the point: ";
		cin >> deciatki;

		perehod = chislo;

		chislo = okruglenie(chislo, deciatki);

		cout << "Result number is = " << long(chislo * 10000) << endl << endl;
	} while (perehod > 0);

}

double okruglenie(double znachenie, int stepenokruglenia)
{
	stepenokruglenia = pow(10, (stepenokruglenia + 1));

	znachenie = long(znachenie * stepenokruglenia);

	cout << "Chislo = " << long(znachenie) << endl;

	if ((long(znachenie) % 10) >= 5)
	{
		return  ((double(long(znachenie) / 10 + 1)) * 10) / stepenokruglenia;
	}
	else
	{
		return  double(long(znachenie) / 10) * 10 / stepenokruglenia;
	}
}