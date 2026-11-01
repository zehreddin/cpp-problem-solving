#include<iostream>
using namespace std;

int readmarks()
{
	int marks;
	cout << "Enter marks: ";
	cin >> marks;
	return marks;
}

int chekpassfail(int marks)
{
	if (marks >= 50)
		return 1;
	else
		return 0;
}

void displayresult(int result)
{
	if (result == 1)
		cout << "You  passed " << endl;
	else
		cout << "You  failed" << endl;
}

int main()
{
	int marks = readmarks();
	int result = chekpassfail(marks);
	displayresult(result);
	return 0;
}