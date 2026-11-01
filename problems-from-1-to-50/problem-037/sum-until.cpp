#include<iostream>
using namespace std;

int readNumber(string prompt) {
	int number;
		cout << prompt;
		cin >> number;
	return number;
}

int sumUntil(int number) {
	int sum = 0;
	while (number != -99) {
		sum += number;
		number = readNumber("Enter a number (or -99 to stop): ");
	}
	return sum;
}

int main() {
	int number = readNumber("Enter a number: ");
	int total = sumUntil(number);
	cout << "The total sum is: " << total << endl;
	return 0;

}