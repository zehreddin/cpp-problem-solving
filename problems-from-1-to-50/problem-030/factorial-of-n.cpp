#include<iostream>
using namespace std;

int readNumber() {
	int n;
	cout << "Enter a non-negative integer: ";
	cin >> n;
	return n;
}

int factorial(int n) {
	int sum = 1;
	for (int i = n ; i > 1; i--) {
		sum *= i;
	}
	return sum;
}

int main() {
	int n = readNumber();
	int result = factorial(n);
	cout << "Factorial of " << n << " is: " << result << endl;
	return 0;
}