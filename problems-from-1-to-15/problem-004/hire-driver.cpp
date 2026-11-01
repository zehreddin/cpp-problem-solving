#include<iostream>
using namespace std;

enum endriver{yes=1, no=0};

short readnumber(string message)
{
	short number;
	cout << message;
	cin >> number;
	return number;
}

bool readdriver(string message)
{
	short number;
	cout << message;
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

int main()
{
	short age = readnumber("Enter your age: ");
	bool driverandage = readdriver("Do you have a driving license? (1 for yes, 0 for no): ");
	hiredriver(age, driverandage);
	return 0;
}