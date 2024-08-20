#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main25() {
	int num1 = 0;
	int num2 = 0;

	cout << "Enter the first number  : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	for (num1; num1 <= num2; num1++)
		if (num1 % 2 == 1)
			cout << num1 << endl;
	return 0;
}