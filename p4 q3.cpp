#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main17() {
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	int product = 0;
	double average;
	int maximum = 0;
	int minimum = 0;

	cout << "Enter the 3 digit = ";
	cin >> a >> b >>  c;
	sum = a + b + c;
	product = a * b * c;
	average = (sum /3);
	maximum = max(a,max( b, c));
	minimum = min(a, min(b, c));

	cout << " sum : " << sum << endl;
	cout << " product : " << product << endl;
	cout << " average : " << average << endl;
	cout << " maximum : " << maximum << endl;
	cout << " minimum : " << minimum << endl;
	return 0;
}