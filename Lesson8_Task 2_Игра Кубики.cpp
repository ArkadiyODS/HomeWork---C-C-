// написать программу "Игра Кубики". 5 бросков по 2 кубика. Победитель вычисляется по сумме вех бросков. После игры указать среднее значение по броскам каждого игрока.

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int size = 5, dice = 2; // возжность изменять кол-во бросков и кол-во кубиков

void DiceGame(int array[], int size);
int SumCalculator(int array[size][dice]);
float AverageSum(int array[dice]);
void ShowDice(int key);
void Dice1();
void Dice2();
void Dice3();
void Dice4();
void Dice5();
void Dice6();

void main()
{
	srand(time(NULL));
	int FirstMove;
	int Human_Dice[size][dice], AI_Dice[size][dice];

	cout << "\n\t\tLETS PLAY DICE\n\n";
	cout << "If you want to start first, please type 1\n";
	cin >> FirstMove;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		if (FirstMove == 1)
		{
			cout << "Your throw  is\n\n";
			DiceGame(Human_Dice[i], dice);
			cout << "\nAI throw is\n\n";
			DiceGame(AI_Dice[i], dice);
		}
		else
		{
			cout << "AI throw is\n\n";
			DiceGame(AI_Dice[i], dice);
			cout << "\nYour throw is\n\n";
			DiceGame(Human_Dice[i], dice);
		}
		(i < size - 1) ? cout << "\n\n\t\t Next set!\n\n" : cout << "\n\t\tLets check the results:\n\n";
	}

	cout << "Human " << SumCalculator(Human_Dice) << endl;
	cout << "AI  " << SumCalculator(AI_Dice) << endl;

	if (SumCalculator(Human_Dice) > SumCalculator(AI_Dice))
		cout << "\t\t\tYou WIN!\n";
	else if (SumCalculator(Human_Dice) == SumCalculator(AI_Dice))
		cout << "\t\t\tDraw GAME\n";
	else
		cout << "\t\t\tAI WIN!\n";

	cout << endl << endl;

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " set. Your average is " << AverageSum(Human_Dice[i]) << " and AI average is " << AverageSum(AI_Dice[i]) << endl;
	}

	cout << "\n\t\tGAME OVER\n\n";

}

void DiceGame(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 6 + 1;
		ShowDice(array[i]);
	}


}

int SumCalculator(int array[size][dice])
{
	int Sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < dice; j++)
		{
			Sum += array[i][j];
		}
	}
	return Sum;
}

float AverageSum(int array[dice])
{
	float AveSum = 0;
	int i = 0;
	for (; i < dice; i++)
	{
		AveSum += array[i];
	}
	AveSum /= i;
	return AveSum;
}

void ShowDice(int key)
{
	switch (key)
	{
	case 1: Dice1();
		break;
	case 2: Dice2();
		break;
	case 3: Dice3();
		break;
	case 4: Dice4();
		break;
	case 5: Dice5();
		break;
	case 6: Dice6();
		break;
	}
}

void Dice1()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 2 && j == 2))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void Dice2()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 3 && j == 1) || (i == 1 && j == 3))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void Dice3()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 2 && j == 2) || (i == 3 && j == 1) || (i == 1 && j == 3))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void Dice4()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 1 && j == 1) || (i == 3 && j == 1) || (i == 1 && j == 3) || (i == 3 && j == 3))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void Dice5()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 1 && j == 1) || (i == 3 && j == 1) || (i == 1 && j == 3) || (i == 3 && j == 3) || (i == 2 && j == 2))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void Dice6()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 4 || j == 4 || i == 0 || j == 0)
				cout << "x ";
			else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 3))
				cout << char(4) << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl;
}