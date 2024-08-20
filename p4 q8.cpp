#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main23() {
	char colour = ' ';
	int level = 0;

	cout << "Enter the color in first character : ";
	cin >> colour;

	switch (colour) {
	case 'r':
	case 'R':
		cout << "red\n";
		cout << "Enter the level : ";
		cin >> level;
		switch (level) {
		case 1:
			cout << "Caution";
			break;
		case 2:
			cout << "Dangerou";
			break;
		case 3:
			cout << "Critical";
			break;
		default:
			cout << "Invalid";
			break;
		}
		break;
	case 'g':
	case 'G':
		cout << "green";
		break;
	case'b':
	case'B':
		cout << 'blue';
		break;
	default:
		cout << "black";
	}
	return 0
		;
}