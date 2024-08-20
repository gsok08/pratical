#include <iostream>
#include <iomanip>
using namespace std;

int main10() {
	int d1, d2, d3, d4;
	int num = 0;
	cout << "Enter a 4-digit integer = ";
	cin >> num;
	 
	d1 = num / 1000;
	d2 = num / 100 % 10;
	d3 = num / 10 % 10;
	d4 = num % 10;

	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d4 << endl;
	return 0;
}