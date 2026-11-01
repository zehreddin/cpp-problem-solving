#include<iostream>
using namespace std;

float readInput(string prompt) {
	float value;
	cout << prompt;
	cin >> value;
	return value;
}

float calculateArea(float base, float height) {
	return (base * height) / 2;
}

int main() {
	float base = readInput("Enter the base of the triangle: ");
	float height = readInput("Enter the height of the triangle: ");
	float area = calculateArea(base, height);
	cout << "The area of the triangle is: " << area << endl;
	return 0;
}