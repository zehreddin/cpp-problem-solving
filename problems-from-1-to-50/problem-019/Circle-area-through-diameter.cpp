#include<iostream>
#include<cmath>
using namespace std;

float readDiameter() {
	float diameter;
	cout << "Enter the diameter of the circle: ";
	cin >> diameter;
	return diameter;
}

float calculateArea(float diameter) {
	float t = 3.14;
	return t * pow(diameter / 2, 2);
	
}

int main() {
	float diameter = readDiameter();
	float area = calculateArea(diameter);
	cout << "The area of the circle is: " << area << endl;
	return 0;
}