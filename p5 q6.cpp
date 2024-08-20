//repeat the question use while

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main29() {
	int num = 0;
	char again = ' ';

	cout << "Enter the number : ";
	cin >> num;
	if (0 <= num && num <= 50) {
		cout << " valid\n ";
	}
	else cout << "Invalid\n";
	
	cout << "Repeat the question (Y/N) = ";
	cin >> again;
	while (again == 'Y'|| again == 'y') {
		cout << "Enter the number : ";
		cin >> num;
		if (0 <= num && num <= 50) {
			cout << " valid\n";
			cout << "Repeat the question (Y/N) = ";
			cin >> again;
		}
		else cout << "Invalid\n";
		cout << "Repeat the question (Y/N) = ";
		cin >> again;
	}
	return 0;
}