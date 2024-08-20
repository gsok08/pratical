#include <iostream>
#include <iomanip>
#include  <string>
using namespace std;

int main12() {
	double F = 0;
	double C = 0;

	cout << "Enter the celsius = ";
	cin >> C;
	F = 32 + (C * (180.00 / 100.0));
	cout << "Fahrenheit temperature is " << F;
	return 0;
}