#include<iostream>
#include<cmath>
using namespace std;

float readInput(string prompt) {
    float value;
    cout << prompt;
    cin >> value;
    return value;
}

float calculateArea(float a, float b) {
	float pi = 3.14159;
	float radius = pi * (pow(b, 2)/4);
	return ((2 * a - b) / (2 * a + b)) * radius;
}

int main() {
	float a = readInput("Enter the length of the equal sides (a): ");
	float b = readInput("Enter the length of the base (b): ");
	float area = calculateArea(a, b);
	cout << "The area of the inscribed circle is: " << area << endl;

	return 0;
}