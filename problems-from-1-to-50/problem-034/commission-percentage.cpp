#include<iostream>
#include<cmath>
using namespace std;

double readAllsales() {
	double sales;
	cout << "Enter the total sales amount: ";
	cin >> sales;
	return sales;
}

double calculateCommission(double sales) {
	double commission;
	if (sales > 1000000) {
		return commission = sales * 0.01;
	}
	else if (sales <= 1000000 && sales > 500000) {
		return commission = sales * 0.02;
	}
	else if (sales <= 500000 && sales > 100000) {
		return commission = sales * 0.03;
	}
	else if (sales <= 100000 && sales >= 50000) {
		return commission = sales * 0.05;
	}
	else
	{
		return commission = 0;
	}
}

int main() {
	double sales = readAllsales();
	double commission = calculateCommission(sales);
	cout << "The commission is: " << commission << endl;
	return 0;
}