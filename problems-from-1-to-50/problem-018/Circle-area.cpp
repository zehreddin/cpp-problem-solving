#include<iostream>
#include<cmath>
using namespace std;

float readRadius() {
	float radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	return radius;
}

float calculateArea(float radius) {
	return 3.14159 * pow(radius, 2);
}

int main() {
	float radius = readRadius();
	float area = calculateArea(radius);
	cout << "The area of the circle is: " << area << endl;
	return 0;
}