#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main21() {
	double sale = 0;
	double income = 0;

	cout << "Enter your monthly sales : ";
	cin >> sale;

	if (sale >= 50000) {
		income = 375 + 0.16 * sale;
	}
	else if (50000 > sale && sale >= 40000) {
		income = 350 + 0.14 * sale;
	}
	else if (40000 > sale && sale >= 30000) {
		income = 325 + 0.12 * sale;
	}
	else if (30000 > sale && sale >= 20000) {
		income = 300 + 0.09 * sale;
	}
	else if (20000 > sale && sale >= 10000) {
		income = 250 + 0.05 * sale;
	}
	else income = 200 + 0.03 * sale;

	cout << income;
	return 0;
}