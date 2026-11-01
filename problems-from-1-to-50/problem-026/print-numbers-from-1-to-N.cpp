#include<iostream>
using namespace std;

int readNumber() {
	int n;
	cin >> n;
	return n;
}

void printNumbers(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
}

int main() {
	int n = readNumber();
	printNumbers(n);
	return 0;
}