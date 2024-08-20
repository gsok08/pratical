#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main7() {
	int groupnum = 0;
	char choice = 'Y/N ';
	cout << "enter your group number : ";
	cin >> groupnum;
	if (groupnum == 1) {
		cout << "ONE " << endl;
		cout << "LeveL A(Y/N) :";
		cin >> choice;
		if (choice == 'Y')
			cout << "admin";
		else cout << "LeveL S(Y/N) : ";
		cin >> choice;
		if (choice == 'Y')
			cout << "staff";
		else cout << "Invalid";
	}
		if (groupnum == 2) {
			cout << "TWO";
		}
		if (groupnum == 3) {
			cout << "THREE";
		}
	else cout << "invalid";
	return 0;
}
	 