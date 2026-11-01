#include <iostream>
using namespace std;

int readtime(string prompt) {
	int time;
	cout << prompt;
	cin >> time;
	return time;
}

int calculattotalseconds(int days, int hours, int minutes, int seconds) {
	return (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
}

int main() {
	int days = readtime("Enter the number of days: ");
	int hours = readtime("Enter the number of hours: ");
	int minutes = readtime("Enter the number of minutes: ");
	int seconds = readtime("Enter the number of seconds: ");
	int totalSeconds = calculattotalseconds(days, hours, minutes, seconds);
	cout << "Total duration in seconds: " << totalSeconds << endl;
	return 0;
}