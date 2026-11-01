#include<iostream>
using namespace std;

int readage(string prompt, int min, int max) {
	int age;
	do {
		cout << prompt;
		cin >> age;
	} while (age < min || age > max);
	return age;
}

void readUntilAgeBetween18And45() {
	int age = readage("Enter your age (between 18 and 45): ", 18, 45);
	cout << "You entered a valid age: " << age << endl;
}

int main() {
	readUntilAgeBetween18And45();
	return 0;
}
