#include<iostream>
using namespace std;

float readnumber(string prompt) {
	float number;
	cout << prompt;
	cin >> number;
	return number;
}

float numberofmonths(float loanamount, float monthlyPayment)
{
	return loanamount / monthlyPayment;
}

int main() {
	float loanamount = readnumber("Enter the loan amount: ");
	float monthlyPayment = readnumber("Enter the monthly payment: ");
	float nummonths = numberofmonths(loanamount, monthlyPayment);
	cout << "The number of months is: " << nummonths << endl;
	return 0;
}