#include<iostream>
using namespace std;

float readnumber() {
	float number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

float calculate_remainder(float number1, float number2) {
	return number2 - number1;
}

void print_remainder(float remainder) {
	if (remainder > 0) {
		cout << "be paid back: " << remainder << endl;
	}
	else {
		cout << "religion: " << remainder << endl;
	}
}

int main() {
	float number1 = readnumber();
	float number2 = readnumber();
	float remainder = calculate_remainder(number1, number2);
	print_remainder(remainder);
	return 0;
}