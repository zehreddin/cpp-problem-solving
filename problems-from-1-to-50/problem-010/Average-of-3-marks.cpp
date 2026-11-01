#include<iostream>
using namespace std;

int readMarks(int n) {
	int marks;
	cout << "Enter marks for student " << n << ": ";
	cin >> marks;
	return marks;
}

float calculateAverage(int mark1, int mark2, int mark3) {
	return (mark1 + mark2 + mark3) / 3.0;
}

int main() {
	int mark1 = readMarks(1);
	int mark2 = readMarks(2);
	int mark3 = readMarks(3);
	float average = calculateAverage(mark1, mark2, mark3);
	cout << "The average marks of the three students is: " << average << endl;
	return 0;
}