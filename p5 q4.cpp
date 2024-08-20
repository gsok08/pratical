#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main27() {
	int i = 0;
	int square = 0;
	for (int i = 2; i <= 10; i++) {
		if (i % 2 == 0) {
			square = i * i;
			cout << "The square of " << i << " is " << square << endl;
		}
	}
	return 0;
}