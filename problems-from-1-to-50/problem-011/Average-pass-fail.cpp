#include<iostream>
using namespace std;

enum enpassfail { PASS=1, FAIL=0 };

float readmarks(int a) {
	float marks;
	cout << "Enter marks " << a << ": ";
	cin >> marks;
	return marks;
}

float calculateaverage(float marks1, float marks2, float marks3) {
	return (marks1 + marks2 + marks3) / 3;
}

bool checkpassfail(float average) {
	if (average >= 50) {
		return PASS;
	}
	else {
		return FAIL;
	}
}

void displayresult(float average, bool result) {
	cout << "Average marks: " << average << endl;
	if (result == PASS) {
		cout << "Result: PASS" << endl;
	}
	else {
		cout << "Result: FAIL" << endl;
	}
}

int main() {
	float marks1 = readmarks(1);
	float marks2 = readmarks(2);
	float marks3 = readmarks(3);
	float average = calculateaverage(marks1, marks2, marks3);
	bool result = checkpassfail(average);
	displayresult(average, result);
	return 0;
}