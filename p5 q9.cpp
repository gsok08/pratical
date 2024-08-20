#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main32() {
	int num = 0;
	bool again = false;
	int total = 0;
	int smallest = INT_MAX;

	cout << "Enter the number = ";
	cin >> num;

	while (num != -999) {
		cout << "Enter the number = ";
		cin >> num;
		if (num <= smallest) {
			num = smallest;
			total++;
		}
		
	}
	cout << num << " " << endl;
		cout<< smallest << "and" << total;
		return 0;	
}
