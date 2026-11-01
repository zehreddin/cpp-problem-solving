#include<iostream>
#include<cmath>
using namespace std;

float readInput(string prompt) {
	float num;
	cout << prompt;
	cin >> num;
	return num;
}

float calculateArea(float a, float b, float c) {
	float pi = 3.14159265358979323846;
	float p = (a + b + c) / 2;

	float triangleArea = sqrt(p * (p - a) * (p - b) * (p - c));	

	float radius = (a * b * c) / (4 * triangleArea);

	return pi * pow(radius, 2);
}

int main() {
	float a = readInput("Enter the length of side a: ");
	float b = readInput("Enter the length of side b: ");
	float c = readInput("Enter the length of side c: ");
	float area = calculateArea(a, b, c);
	cout << "The area of the circle described around the triangle is: " << area << endl;
	return 0;
}