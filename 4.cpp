#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main6() {
	double expenses = 0;
	double rebate;
	double total = 0;
	cout << "enter number = ";
	cin >> expenses;
	if (expenses < 100)
		rebate = 0.2;
	else if (expenses < 500)
		rebate = 0.4;
	else rebate = 0.7;
	total = expenses + expenses * rebate;
	cout << "total is " << total << endl;
	return 0;

}
