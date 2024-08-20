#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main15() {
	string cust_name;
	int taxcode = 0;
	double purch_amt = 0;
	double sales_tax = 0;
	double total_amt = 0;
	cout << "Enter your purchase amount :";
	cin >> purch_amt;
	cout << "Enter your categories : ";
	cin >> taxcode;
	switch (taxcode) {
	case 0:
		sales_tax = 0;
		break;
	case 2:
		sales_tax = 0.1 * purch_amt;
		break;
	case 3:
		sales_tax = 0.16 * purch_amt;
		break;
	default:
		sales_tax = 0.06 * purch_amt;

	}
	total_amt = purch_amt + sales_tax;
	cout << cust_name << " your purchase amount is " << purch_amt << " and the tax is " << sales_tax << " so the total amount is " << total_amt;
	return 0;
}