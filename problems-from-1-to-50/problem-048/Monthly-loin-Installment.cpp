#include <iostream>
using namespace std;

float readnumber(string prompt) {
	float number;
	cout << prompt;
	cin >> number;
	return number;
}

float numberOfInstallments(float loanAmount, float monthlyPayment) {
	return loanAmount / monthlyPayment;
}

int main() {
	float loanAmount = readnumber("Enter the loan amount: ");
	float monthlyPayment = readnumber("Enter the monthly payment: ");
	float installments = numberOfInstallments(loanAmount, monthlyPayment);
	cout << "Number of installments: " << installments << endl;
	return 0;
}