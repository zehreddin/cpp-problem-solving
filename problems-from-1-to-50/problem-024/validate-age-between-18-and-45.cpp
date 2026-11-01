#include<iostream>
using namespace std;

short readAge() {
	short age;
	cin >> age;
	return age;
}

void validateAge(short age) {
	if (age < 18 || age > 45) {
		cout << "Invalid age" << endl;
	}
	else
		cout << "Valid age." << endl; {

	}
}

int main() {
	short age = readAge();
	validateAge(age);
	return 0;
}