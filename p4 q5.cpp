#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main19() {
	int cop = 0;//number of current people
	int m = 0; //maximum of the room 
	int adp = 0;//number of people that can be add or need to decrease

	cout << "Enter the maximum room capacity : ";
	cin >> cop;
	cout << "Enter the number of people attending the meeting :  ";
	cin >> m;
	if (cop >= m) {
		cout << "The meeting can be held\n ";
		adp = m - cop;
		cout << "Number addtional to attend the meeting : " << abs(adp);

	}
	else {
		cout << "The meeting cannot be held as planned\n ";
		adp = cop - m;
		cout << "Number of people must be excluded : " << abs(adp);//abs is convert negative to positive
	}
	return 0;
}