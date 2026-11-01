#include<iostream>
#include<cmath>
using namespace std;

int readnumber()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}

void powerof(int n)
{
	cout << "Power of 2: " << pow(n, 2) << endl;
	cout << "Power of 3: " << pow(n, 3) << endl;
	cout << "Power of 4: " << pow(n, 4) << endl;
}

int main()
{
	int n = readnumber();
	powerof(n);
	return 0;
}