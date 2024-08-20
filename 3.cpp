#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main4() {
	char gender =0;
	char name = 0;
	int age = 0;
	cout << "enter age =";
	cin >> age;
	cin.ignore();
	cout << "enter gender =";
	cin.get(gender);
	cout << "age is" << age << endl;
	cout << "gender is " << gender << endl;
	return 0;
}