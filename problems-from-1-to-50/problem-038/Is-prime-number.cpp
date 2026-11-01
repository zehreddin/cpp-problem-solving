#include<iostream>
using namespace std;

int readNumber() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

void checkPrime(int number) {
	if (number <= 1) {
		cout << number << " is not a prime number." << endl;
		return;
	}
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			cout << number << " is not a prime number." << endl;
			return;
		}
	}
	cout << number << " is a prime number." << endl;
}

int main() {
	int number = readNumber();
	checkPrime(number);
	return 0;
}