#include<iostream>
using namespace std;

int readNumber() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}

void printNumbers(int n) {
	for (int i = n; i >= 1; i--) {
		cout << i << endl;
	}
}

int main() {
	int n = readNumber();
	printNumbers(n);
	return 0;
}