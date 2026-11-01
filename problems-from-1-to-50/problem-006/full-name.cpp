#include<iostream>
#include<string>
using namespace std;

string readname(string messgae)
{
	string name;
	cout << messgae << endl;
	cin >> name;
	return name;
}

int main()
{
	string firstName = readname("pleas enter the first name");
	string lastname = readname("pleas enter the last name");
	cout << firstName << " " << lastname;
	return 0;
}