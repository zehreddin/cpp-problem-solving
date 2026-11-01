#include<iostream>
using namespace std;

int readNumber(int i) {
	int num;
	cout << "\nEnter a number " << i<<": ";
	cin >> num;
	return num;
}

void swapNumbers(int& a, int& b) {

	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b;
	a = readNumber(1);
	b = readNumber(2);
	cout << "\nBefore swapping: " << a << " " << b;
	swapNumbers(a, b);
	cout << "\nAfter swapping: " << a << " " << b;
	return 0;
}