#include<iostream>
#include<cmath>

using namespace std;	

float  readside()
{
	float side;
	cout << "Enter the side length of the square: ";
	cin >> side;
	return side;
}

float calculateArea(float side)
{		
	float ip = 3.14;
	return  (ip * pow(side, 2)) / 4;
}

int main()
{
	float side = readside();
	float area = calculateArea(side);
	cout << "The area of the circle inscribed in the square is: " << area << endl;
	return 0;
}