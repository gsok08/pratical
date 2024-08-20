#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main13() {
	double h, l, a;
	cout << "Enter the height of the triangle : ";
	cin >> h;
	cout << "Enter the length of the triangle : ";
	cin >> l;
	a =  (h * l) /2 ;
	cout << "Area of triangle" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Height : " << h << " cm\n";
	cout << "Length : " << l << " cm\n";
	cout << "Area :" << a << " cm\n";
	return 0;
}