#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;
 


void main()
{
	const int size = 50; 
	char str[size];
	char res[size];
	char temp[size];
	
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


	int len;

	if (m > 1)
	{
		strncpy_s(res, str, m - 1);
		_strrev(str);
		strncpy_s(temp, str, strlen(str) - n);
		_strrev(temp);
		len = strlen(temp) + 1;
		puts(res);
		puts(temp);
		strncat_s(res, size*sizeof(char), temp, strlen(temp));
	}
	else
	{
		_strrev(str);
		strncpy_s(res, str, strlen(str) - n);
		_strrev(res);
	}
	puts(res);

}
