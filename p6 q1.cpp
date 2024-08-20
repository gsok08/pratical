#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main35() {
	cout << "Number" << setw(3) << "Square" << setw(3) << "Cube" << endl;
	for (int i = 1; i <= 10; i++) {
		int square = pow(i, 2);
		int cube = pow(i,3);
		cout << i << setw(10) << square << setw(10) << cube << endl;
	}
	return 0;
}