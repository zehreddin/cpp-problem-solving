#include<iostream>
using namespace std;

enum enOperation {
	Add = 1,
	Subtract=2,
	Multiply=3,
	Divide=4
};

double readNumber(string prompt) {
    double num;
        cout << prompt;
        cin >> num;
    return num;
}

int readOperation(string prompt) {
    int op;
    do {
        cout << prompt;
        cin >> op;
    } while (op < 1 || op > 4);
    return op;
}

float calculate(float num1, float num2, int operation) {
	switch (operation) {
	case Add:
		return num1 + num2;
	case Subtract:
		return num1 - num2;
	case Multiply:
		return num1 * num2;
	case Divide:
		if (num2 != 0)
			return num1 / num2;
		else {
			cout << "Error: Division by zero!" << endl;
			return 0;
		}
	default:
		cout << "Invalid operation!" << endl;
		return 0;
	}
}

int main() {
	double num1 = readNumber("Enter first number: ");
	double num2 = readNumber("Enter second number: ");
	int operation = readOperation("Choose operation (1-Add, 2-Subtract, 3-Multiply, 4-Divide): ");
	float result = calculate(num1, num2, operation);
	cout << "Result: " << result << endl;
	return 0;
}