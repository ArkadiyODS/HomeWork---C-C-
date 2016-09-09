#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	const int size = 50; 
	char str[size];
	int m, n;
	bool flag = false;

	gets_s(str, size - 1);

	do{
		if (flag)
			cout << "Error, wrong 'm' or 'n'. You need to try again\n";
		cout << "Please enter start and end number of new string:\n";
		cin.sync();
		cin.clear();
		cin >> m;
		cin >> n;
		flag = true;
	} while (cin.fail() || m > n || m < 1 || n < 1 || n > strlen(str) );

	char *ResStr = new char[n - m + 2];
	int j = 0;

	for (int i = 0; i <= n - 1; i++)
	{
		if (i >= m - 1)
		{
			*(ResStr + j) = *(str + i);
			j++;
		}
	}
	*(ResStr + j) = '\0';
	
	puts(ResStr);

	delete[] ResStr;
	ResStr = NULL;
}
