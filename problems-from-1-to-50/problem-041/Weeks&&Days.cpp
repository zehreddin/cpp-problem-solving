#include<iostream>
using namespace std;

float readhours() {
	float hours;
	cout << "Enter hours: ";
	cin >> hours;
	return hours;
}

float calculatdays(float hours) {
	return hours / 24;
}

float calculatweeks(float days) {
	return days / 7;
}

int main() {
	float hours = readhours();
	float days = calculatdays(hours);
	float weeks = calculatweeks(days);
	cout << "Days: " << days << endl;
	cout << "Weeks: " << weeks << endl;
	return 0;
}