#include<iostream>
using namespace std;

enum enmonth
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

int readMonth()
{
	int month;
	cout << "Enter month number (1-12): ";
	cin >> month;
	return month;
}

void chekMonth(int month)
{
	if(month==January)
	{
		cout << "January" << endl;
	}
	else if(month==February)
	{
		cout << "February" << endl;
	}
	else if (month == March)
	{
		cout << "March" << endl;
	}
	else if (month == April)
	{
		cout << "April" << endl;
	}
	else if (month == May)
	{
		cout << "May" << endl;
	}
	else if (month == June)
	{
		cout << "June" << endl;
	}
	else if (month == July)
	{
		cout << "July" << endl;
	}
	else if (month == August)
	{
		cout << "August" << endl;
	}
	else if (month == September)
	{
		cout << "September" << endl;
	}
	else if (month == October)
	{
		cout << "October" << endl;
	}
	else if (month == November)
	{
		cout << "November" << endl;
	}
	else if (month == December)
	{
		cout << "December" << endl;
	}
	else 
	{
		cout << "Invalid month number!" << endl;
	}
}

int main()
{
	int month = readMonth();
	chekMonth(month);
	return 0;
}