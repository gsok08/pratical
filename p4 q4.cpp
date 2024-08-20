#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main18() {
	double hourly_wage = 0;
	int h = 0;//hours
	double total = 0;
	const int worktime = 40;

	cout << "Enter hourly wage : ";
	cin >> hourly_wage;
	cout << "Enter hours : ";
	cin >> h;
	if (h > worktime) {
		total = h * hourly_wage + hourly_wage * ((h - worktime) * 0.5);
		cout << "You have earned RM" << setprecision(2) << fixed << total;
	}
	else {
		total = h * hourly_wage; 
		cout << "You have earned RM" << setprecision(2) << fixed << total << endl;
		cout << "\nYou are underworked";
	}
	return 0;
	
}