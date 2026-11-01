#include<iostream>
using namespace std;

short readPIN() {
	short pin;
	cout << "Enter your 4-digit PIN: ";
	cin >> pin;
	return pin;
}

short checkPIN(short pin)
{
	const short correctPIN = 1234;
	while(pin != correctPIN) {
		cout << "Incorrect PIN. Please try again: ";
		cin >> pin;
		system("color 04");
	}
	return pin;
}

int main() {
	short pin = readPIN();
	pin = checkPIN(pin);
	cout << "PIN accepted. Access granted." << endl;
	system("color 02");
	return 0;
}