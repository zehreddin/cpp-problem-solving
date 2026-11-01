#include<iostream>
using namespace std;

struct stTime
{
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int remainingSeconds = 0;
};

int readSeconds() {
	int seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	return seconds;
}

stTime calculateFullTime(int seconds) {
	stTime time;
	time.days = seconds / 24 / 60 / 60; // 1 day = 86400 seconds
	seconds %= 86400;
	time.hours = seconds / 60 / 60; // 1 hour = 3600 seconds
	seconds %= 3600;
	time.minutes = seconds / 60; // 1 minute = 60 seconds
	time.remainingSeconds = seconds % 60;
	return time;
}

void displayTime(stTime time) {
	cout << "Days: " << time.days << endl;
	cout << "Hours: " << time.hours << endl;
	cout << "Minutes: " << time.minutes << endl;
	cout << "Seconds: " << time.remainingSeconds << endl;
}

int main() {
	int seconds = readSeconds();
	stTime time = calculateFullTime(seconds);
	displayTime(time);
	return 0;
}