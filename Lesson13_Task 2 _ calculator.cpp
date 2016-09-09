#include <iostream>
#include <stdio.h>

using namespace std;
 
void Addition(double* x, double* y, double *result)
{
 *result = *x + *y;
}

void Deduction(double* x, double* y, double *result)
{
 *result = *x - *y;
}

void Multiplication(double* x, double* y, double *result)
{
 *result = *x * *y;
}

void Division(double* x, double* y, double *result)
{
	if (y)
		*result = *x / *y;
	else
		cout << "Error division by zero is prohibited!" << endl;
}

void Check(double* x, double* y, double* z, char* sign)
{
	switch (*sign)
	{
	case '+': Addition(x, y, z);
		break;

	case '-': Deduction(x, y, z);
		break;

	case '*': Multiplication(x, y, z);
		break;

	case '/': Division(x, y, z);
		break;
	}

}

void main()
{
	double x, y, z;
	char sign;
	bool flag = true;

	do {
		cout << "* * * Calculator! * * *\n\n";
		cin >> x;
		cin >> sign;
		if ((sign == '-') || (sign == '+') || (sign == '/') || (sign == '*'))
		{
			cin >> y;		
			cin.clear();
			cin.sync();
		}
		else {
			cout << "Error! Wrong sign. Pls start fm the biginning\n\n\n";
			continue;
		}
		cout << "= ";
		Check(&x, &y, &z, &sign);
		cout << z << endl << endl;
		cout << "Please enter zero to exit." << endl;
		cin >> flag;
		cin.clear();
		cin.sync();
	} while (flag);

}
