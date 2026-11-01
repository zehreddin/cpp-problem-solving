#include<iostream>
using namespace std;

float readbill() {
	float bill;
	cout << "Enter the bill amount: ";
	cin >> bill;
	return bill;
}

float calculateServiceFee(float bill) {
	return bill * 0.10; // 10% service fee
}

float calculateSalesTax(float bill) {
	return bill * 0.16; // 16% sales tax
}

int main() {
	float bill = readbill();
	float serviceFee = calculateServiceFee(bill);
	float salesTax = calculateSalesTax(serviceFee+bill);
	float totalAmount = bill + serviceFee + salesTax;
	cout << "Bill Amount: $" << bill << endl;
	cout << "Service Fee (10%): $" << serviceFee << endl;
	cout << "Sales Tax (16%): $" << salesTax << endl;
	cout << "Total Amount: $" << totalAmount << endl;
	return 0;
}