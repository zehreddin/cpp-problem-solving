#include<iostream>
using namespace std;

int readNumber(int i) {
	int num;
	cout << "\nEnter a number " << i << ": ";
	cin >> num;

	return num;
}

int chekMax(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

void printMax(int num1, int num2, int max) {
	cout << "\nMax of " << num1 << " and " << num2 << " is: " << max;
}

int main() {
	int num1 = readNumber(1);
	int num2 = readNumber(2);
	int max = chekMax(num1, num2);
	printMax(num1, num2, max);
	return 0;
}