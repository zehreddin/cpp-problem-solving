#include<iostream>
using namespace std;

short readPin() {
	short pin;
	cout << "Enter your 4-digit PIN: ";
	cin >> pin;
	return pin;
}

void checkPin(short pin) {
	const short correctPin = 1234; 
	for (int i = 0; i < 3; i++) {
		if (pin == correctPin) {
			cout << "PIN is correct." << endl;
			system("color 0A");
			return;
		}
		else {
			cout << "Incorrect PIN. Try again." << endl;
			pin = readPin();
			system("color 0C");
		}
	}
}

int main() {
	short pin = readPin();
	chekPin(pin);
	return 0;
}