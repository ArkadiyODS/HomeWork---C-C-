#include <iostream>
#include <string.h>


using namespace std;
 
int SymbolSearch(const char* string, char symbol, int size, int LastIndex)
{
	int i = LastIndex;
	for (; i <= size; i++)
		if (*(string + i) == symbol)
			return i + 1;

		return 0;
}

int LastSymbolSearch(const char* string, char symbol, int size)
{
	for (int i = size; i >= 0; i--)
	if (*(string + i) == symbol)
		return i + 1;

	return 0;
}


void main()
{
	const int size = 128; 
	char str[size];
		
	char input;
	int index = 0;
	int flag = 0;

	cout << "Please enter string:\n";

	gets_s(str, size - 1);

	cout << "Please enter symbol:\n";
	cin >> input;
	
	do
	{
		index = SymbolSearch(str, input, strlen(str), index);

		if (index)
		cout << "Index: " << index << endl;

		flag++;

	} while (index);

	if (flag < 2)
		cout << "Symbol wasn't found\n\n";
	
	index = 0;

	index = LastSymbolSearch(str, input, strlen(str));

	if (index)
		cout << "Last Index: " << index << endl;
	else 
		cout << "Symbol wasn't found\n\n";

}
