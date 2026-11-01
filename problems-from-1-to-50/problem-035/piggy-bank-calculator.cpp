#include<iostream>
using namespace std;

enum enmony
{
	penny = 1,
	nickel = 5,
	dime = 10,
	quarter = 25,
	dollar = 100
};

float readhowmachmoney(string message)
{
	float money;
	cout << message;
	cin >> money;
	return money;
}

float totalpenny(float penny, float nickel, float dime, float quarter, float dollar)
{
	float totalpenny = 0;
	totalpenny = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
	return totalpenny;
}

int main()
{
	float penny, nickel, dime, quarter, dollar;
	penny = readhowmachmoney("Enter the number of pennies: ");
	nickel = readhowmachmoney("Enter the number of nickels: ");
	dime = readhowmachmoney("Enter the number of dimes: ");
	quarter = readhowmachmoney("Enter the number of quarters: ");
	dollar = readhowmachmoney("Enter the number of dollars: ");
	cout << "Total in dollars: $" << (totalpenny(penny, nickel, dime, quarter, dollar) / 100) << endl;
	cout << "Total in pennies: " << totalpenny(penny, nickel, dime, quarter, dollar) << " pennies" << endl;
	return 0;
}