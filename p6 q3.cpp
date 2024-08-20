#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main37() {
	double c = 0;
	double b = 0;
	double a = 0;
	double d = 0;
	const double pi = 3.142;
	double radian = 0;
	radian = d * (pi/180.0);
	a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c * cos(radian)));
	cout << "Enter thee length b and c : ";
	cin >> b >> c;	
	cout << "Enter the degree : ";
	cin >> d;
	cout << "the length of a is "<<d;
	return 0;

}