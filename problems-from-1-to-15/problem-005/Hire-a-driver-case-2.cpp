#include<iostream>
using namespace std;

enum endriver{yes=1, no=0};

short readnumber(string message)
{
	short number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

bool readdriver(string message)
{
	short number;
	cout << message << endl;
	cin >> number;
	return (number == yes);
}

void hiredriver(short age, bool driverandage)
{
	if (driverandage && age >= 18)
		cout << "Hired" << endl;
	else
		cout << "Rejected" << endl;
}

void start()
{
	short age = readnumber("Enter your age: ");
	bool driverandage = readdriver("Do you have a driving license? (1 for yes, 0 for no): ");
	hiredriver(age, driverandage);
}

void recommendation(bool num)
{
	if (num == yes)
	{
		cout << "Hired" << endl;
	}
	else
	{
		start();
	}
	
}


int main()
{
	
	recommendation(readdriver("Do you have connections? (1 for yes, 0 for no): "));
	return 0;
}