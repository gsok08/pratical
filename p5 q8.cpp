#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main31() {
	int num = 0;
	cout << "enter the number";
	cin >> num;
	for (int i = 0; i <= num; i++)
		if (num % i == 0)
			cout << i << " ";
	return 0;
}