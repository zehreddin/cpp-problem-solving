#include<iostream>
using namespace std;

int readnumber() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

int sum_even_numbers(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	int n = readnumber();
	int result = sum_even_numbers(n);
	cout << "Sum of even numbers up to " << n << " is: " << result << endl;
	return 0;
}