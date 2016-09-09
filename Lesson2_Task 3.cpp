/* Известно что один дюйм равен 2,54 см. Разработать приложение переводящее дюймы в сантиметры и наоборот. Диалог с вользователем реализовать через систему меню. */

#include <iostream>
using namespace std;

void main()
{
	float value = 0;
	const float exch = 2.54;
	int flag = 0;

	// Выводим меню на экран и предлагаем пользователю сделать свой выбор
	do {
		cout << "Please enter 1 to choose CM or enter 2 to choose INCH\n";
		cin >> flag;
		
		// проверяем на не корректный выбор
		if (flag != 1 && flag != 2) {
			cout << "* * * Error, incorrect choice * * *\n";
		}

	} while (flag != 1 && flag != 2); // повторяем цикл пока пользователь не примет правильное решение

		// предлагаем пользователю ввести данные в зависимости от его предыдущего выбора и выводим результат
		switch (flag){
		case 1: 	cout << "Please enter the value in CM: ";
					cin >> value;
					cout << "Your value in is equal to " << value / exch << " INCH\n";
					break;
		
		case 2: 
					cout << "Please enter the value in INCH: ";
					cin >> value;
					cout << "Your value in is equal to " << value * exch << " CM\n";
					break;
				}
	
}