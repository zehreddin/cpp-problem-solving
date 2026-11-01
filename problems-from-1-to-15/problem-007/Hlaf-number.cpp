#include<iostream>
using namespace std;

int readnumber(string message)
{
	int number;
	
	cout << message << endl;
	cin >> number;
	
	return number;
}

float halfnumber(int number)
{
	return number / 2.0;
}

int main()
{
	int number = readnumber("Enter a number: ");
	float half = halfnumber(number);
	cout << "Half of " << number << " is " << half << endl;
	return 0;
}