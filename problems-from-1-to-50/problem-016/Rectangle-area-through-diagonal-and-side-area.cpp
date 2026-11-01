#include<iostream>
using namespace std;

float readInput(string prompt) {
	float value;
	cout << prompt << endl;
	cin >> value;
	return value;
}

float calculateArea(float diagonal, float side) {
	return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

int main() {
	float diagonal = readInput("Enter the length of the diagonal:");
	float side = readInput("Enter the length of one side:");
	float area = calculateArea(diagonal, side);
	cout << "The area of the rectangle is: " << area << endl;
	return 0;
}