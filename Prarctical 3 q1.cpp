#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main9() {
	int days = 0;
	int week = 0;
	int day = 0;
	cout << "Enter the number of days : ";
	cin >> days;
	week = days / 7;
	day = days % 7;
	cout << days << " days = " << week << " weeks, " << day << " days";
	return 0;
}