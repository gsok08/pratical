#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main30() {
	int num = 0;
	int product = 1;
	bool again = false;

	cout << "enter a number = ";
	cin >> num;

	while (num > 0) {
			product *= num ;
			again = true;
			cout << "enter a number = ";
			cin >> num;
	}
	cout << product;
	return 0;



}