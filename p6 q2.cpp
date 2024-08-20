#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main36() {
	int num = 0;
	cout << "Enter the number = ";
	cin >> num;

	cout << "Number " << setw(7) << "SquareRoot" << endl;
	for (int i = 0; i <= num; i++) {
		cout << i << setw(10) << sqrt(i) << endl;
	}
	return 0;
}