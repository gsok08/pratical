#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main33() {
	int num = 0;
	int total = 0;

	cout << " Enter the number = ";
	cin >> num;
	for (int i = 1; i <= 12; i++){
		total = num * i;
		cout << num << " * " << i << " = " << total << endl;
	}
	return 0;
}