#include<iostream>
using namespace std;

enum engrade { A = 5, B = 4, C = 3, D = 2, E = 1, F = 0 };

int readnumber(string prompt, int from, int to)
{
	int number;

	do {
		cout << prompt;
		cin >> number;
	} while (number < from || number > to);

	return number;
}

int calculategrade(int number)
{
	if (number >= 90)
		return engrade::A;
	else if (number >= 80)
		return engrade::B;
	else if (number >= 70)
		return engrade::C;
	else if (number >= 60)
		return engrade::D;
	else if (number >= 50)
		return engrade::E;
	else
		return engrade::F;
}


void printgrade(int number)
{
	switch (number)
	{
	case engrade::A:
		cout << "Grade A" << endl;
		break;
	case engrade::B:
		cout << "Grade B" << endl;
		break;
	case engrade::C:
		cout << "Grade C" << endl;
		break;
	case engrade::D:
		cout << "Grade D" << endl;
		break;
	case engrade::E:
		cout << "Grade E" << endl;
		break;
	default:
		cout << "Grade F" << endl;
	}
}

int main()
{
	int number = readnumber("Enter your score (0-100): ", 0, 100);
	int grade = grande(number);
	printgrade(grade);
	return 0;
}


