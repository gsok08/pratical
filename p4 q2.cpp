#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main16() {
	double t = 0; //temperature

	cout << "Enter the temperature :";
	cin >> t;

	if (t > 85)
		cout << "swimming";
	else if (70 < t && t <= 85)
		cout << "Tennis";
	else if (32 < t && t <= 70)
		cout << "Golf";
	else if (0 < t && t <= 32)
		cout << " Skiing";
	else if (t <= 0)
		cout << "dancing";	
	return 0;
}