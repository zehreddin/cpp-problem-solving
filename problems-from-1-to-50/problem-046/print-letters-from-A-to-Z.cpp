#include<iostream>
using namespace std;

void printLetters() {
	for (char letter = 65; letter <= 90; ++letter) {
		cout << (char)letter << endl;
	}
	
}

int main() {
	printLetters();
	return 0;
}