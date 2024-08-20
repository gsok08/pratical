#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main26(){
	int total = 0;
	int i = 0;
	for (i = 30; i <= 50; i += 3) {
		total += i;
		cout << i;
		if (i < 48) {
			cout << " + ";
		}
	}
	cout << " = " << total << endl;
	return 0;
}