#include<iostream>
using namespace std;

enum enweek
{
	Sunday = 1,
	Monday = 2,
	Tuesday = 3,
	Wednesday = 4,
	Thursday = 5,
	Friday = 6,
	Saturday = 7
 };

int readDayOfWeek()
{
	int day;
	do {
		cout << "Enter a number (1-7) for the day of the week: ";
		cin >> day;
	} while (day < 1 || day > 7);
	return day;
}

void checkDayOfWeek(int day)
{
	switch (day)
	{
	case Sunday:
		cout << " its Sunday" << endl;
		break;
	case Monday:
		cout << " its Monday" << endl;
		break;
	case Tuesday:
		cout << " its Tuesday" << endl;
		break;
	case Wednesday:
		cout << " its Wednesday" << endl;
		break;
	case Thursday:
		cout << " its Thursday" << endl;
		break;
	case Friday:
		cout << " its Friday" << endl;
		break;
	case Saturday:
		cout << " its Saturday" << endl;
		break;
	default:
		cout << "Invalid day of the week." << endl;
	}
}

int main()
{
	int day = readDayOfWeek();
	checkDayOfWeek(day);
	return 0;
}