#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main20() {
	double income = 0;
	double sale = 0;

	cout << "Enter your monthly sales :";
	cin >> sale;
	if (sale >= 50000) {
		income = 375 + 0.16 * sale;
	}
	else {
		if (sale >= 40000) {
			income = 350 + 0.14 * sale;
		}
		else {
			if (sale >= 30000) {
				income = 325 + 0.12 * sale;
			}
			else {
				if (sale >= 20000) {
					income = 300 + 0.09 * sale;
				}
				else {
					if (sale >= 10000) {
						income = 250 + 0.05 * sale;
					}
					else {
						income = 200 + 0.03 * sale;
					}
				}
			}
		}
	}
	cout << income;
	return 0;
}