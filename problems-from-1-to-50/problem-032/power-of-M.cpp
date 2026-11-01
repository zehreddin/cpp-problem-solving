#include<iostream>
#include<cmath>
using namespace std;

int readnumber(string prompt) {
	int n;
	do {
		cout << prompt;
		cin >> n;
	} while (n < 1);
	return n;
}

int calculatepower(int n, int m) {
	return pow(n, m);
}

int main() {
	int n = readnumber("Enter a number: ");
	int m = readnumber("Enter the power: ");
	cout << n << " raised to the power of " << m << " is: " << calculatepower(n, m) << endl;
	return 0;
}