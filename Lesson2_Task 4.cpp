/* Кто хочет стать миллионером */

#include <iostream>
using namespace std;

void main()
{
	char answer;

	// Выводим на экран вопрос и предлагаем пользователю сделать свой выбор
	cout << "Lets play a game\nFirst question is \"QUESTION 1\"\n" << "Please choose correct answer:\nA - for ANSWER 1\nB - for ANSWER 2\nC - for ANSWER 3\nD - for ANSWER 4\n";
	cin >> answer;
	// проверяем ответ пользователя
switch (answer){
	// если 1 ответ правильный, запускаем следующий свич с новым вопросом
		case 'A':
		case 'a':	cout << "Correct!!!\n" << "Next question is \"QUESTION 2\"\nPlease choose correct answer:\nA - for ANSWER 1\nB - for ANSWER 2\nC - for ANSWER 3\nD - for ANSWER 4\n";
			cin >> answer;
			// если 2 ответ правильный, запускаем следующий свич с новым вопросом
			switch (answer){
			case 'B':
			case 'b':
				cout << "Correct!!!\n" << "Next question is \"QUESTION 3\"\nPlease choose correct answer:\nA - for ANSWER 1\nB - for ANSWER 2\nC - for ANSWER 3\nD - for ANSWER 4\n";
				cin >> answer;
				// если 3 ответ правильный, запускаем следующий свич с новым вопросом
				switch (answer){
				case 'C':
				case 'c':
					cout << "Correct!!!\n" << "Next question is \"QUESTION 4\"\nPlease choose correct answer:\nA - for ANSWER 1\nB - for ANSWER 2\nC - for ANSWER 3\nD - for ANSWER 4\n";
					cin >> answer;
					// если 4 ответ правильный, поздравляем пользователя
					switch (answer){
					case 'D':
					case 'd':
						cout << "Correct!!!\n" << "You won ONE BILLION DOLLARS!\n";
						break;
					// если 4 ответ не правильный, сообщаем пользователю о проигрыше
					case 'A':
					case 'a':
						cout << "It is incorrect answer. Sorry, but you lose!\n";
						break;
					case 'B':
					case 'b':
						cout << "It is incorrect answer. Sorry, but you lose!\n";
						break;
					case 'C':
					case 'c':
						cout << "It is incorrect answer. Sorry, but you lose!\n";
						break;
					default:
						cout << "You chose wrong letter and lose!  Be more attentive next time\n";
					}
				break;
				// если 3 ответ не правильный, сообщаем пользователю о проигрыше
				case 'A':
				case 'a':
					cout << "It is incorrect answer. Sorry, but you lose!\n";
					break;
				case 'B':
				case 'b':
					cout << "It is incorrect answer. Sorry, but you lose!\n";
					break;
				case 'D':
				case 'd':
					cout << "It is incorrect answer. Sorry, but you lose!\n";
					break;
				default:
					cout << "You chose wrong letter and lose! Be more attentive next time\n";
		}
		break;
		// если 2 ответ не правильный, сообщаем пользователю о проигрыше
			case 'A':
			case 'a':
				cout << "It is incorrect answer. Sorry, but you lose!\n";
				break;
			case 'C':
			case 'c':
				cout << "It is incorrect answer. Sorry, but you lose!\n";
				break;
			case 'D':
			case 'd':
				cout << "It is incorrect answer. Sorry, but you lose!\n";
				break;
			default:
				cout << "You chose wrong letter and lose!  Be more attentive next time\n";
			}
			break;
		// если 1 ответ не правильный, сообщаем пользователю о проигрыше
		case 'B':
		case 'b':
			cout << "It is incorrect answer. Sorry, but you lose!\n";
			break;
		case 'C':
		case 'c':
			cout << "It is incorrect answer. Sorry, but you lose!\n";
			break;
		case 'D':
		case 'd':
			cout << "It is incorrect answer. Sorry, but you lose!\n";
			break;
		default:
			cout << "You chose wrong letter and lose! Be more attentive next time\n";
				}
	
}