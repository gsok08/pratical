#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main22() {
	int flag = 0;

	cout << "Enter the number : ";
	cin >> flag;

	switch (flag) {
	case 1 :
	    cout << "HOT";
		break;
	case 2 :
		cout << "WARM";
		break;
	case 3 :
		cout << "COLD";
		break;
	default :
		cout << "OUT OF RANGE";
	}
	return 0;
}