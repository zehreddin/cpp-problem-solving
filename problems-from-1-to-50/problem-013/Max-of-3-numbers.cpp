#include<iostream>
using namespace std;

int readNumber(int i) {
	int num;
	cout << "\nEnter a number " << i << ": ";
	cin >> num;
	return num;
}

int findMax(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else {
		return c;
	}
}

int main() {
	int num1 = readNumber(1);
	int num2 = readNumber(2);
	int num3 = readNumber(3);
	int maxNum = findMax(num1, num2, num3);
	cout << "\nThe maximum number is: " << maxNum << endl;
	return 0;
}