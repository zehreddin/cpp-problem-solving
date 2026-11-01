#include<iostream>
using namespace std;

int readNumber() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}

int sumOddNumbers(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i += 2) {
		sum += i;
	}
	return sum;
}

int main() {
	int n = readNumber();
	int sum = sumOddNumbers(n);
	cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
	return 0;
}