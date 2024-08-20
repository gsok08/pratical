#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main4394384923849() {
	char literal = ' ';
	char years_of_service = ' ';

	cout << "ENTER YOUR EMPLOYEE STATUS(F/P) = ";
	cin >> literal;
	cout << "YEARS OF SERVICE is 7 YEARS OR MORE (Y/N) =	" ;
	cin >> years_of_service;
	if (years_of_service == 'Y' && literal == 'P')
		cout << "Percent Raise = 4.1";
	else if (years_of_service == 'Y' && literal == 'F')
		cout << "Percent Raise = 7.0";
	else if (years_of_service == 'N' && literal == 'P')
		cout << "Percent Raise = 3.5";
	else cout << "Percent Raise = 5.0";
	return 0;
}

	 
			