#include<iostream>
using namespace std;

int readnumber(string message)
{
    int n;
    cout << message << endl;
    cin >> n;
    return n;
}

int calculatearea(int length, int breadth)
{
	return length * breadth;
}

int main()
{
	int length = readnumber("Enter the length of rectangle");
	int breadth = readnumber("Enter the breadth of rectangle");
	int area = calculatearea(length, breadth);
	cout << "Area of rectangle is: " << area << endl;
	return 0;
}