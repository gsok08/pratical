#include <iostream>
	using namespace std;
	int a, b, c, d, sum, product;

	int main3() {
		cout << "Enter four integers = ";
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		product = a * b * c * d;
		cout << "Sum of all = " << sum;
		cout << "\nProduct of all = " << product;

		return 0;
	}