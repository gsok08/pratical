#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main14() {
	//variables
	const float pi = 3.142;
	float radius = 0, height = 0, base = 0, outside = 0, total = 0, cost = 0;
	double total_cost = 0;
	int cylinder = 0;

	//input
	cout << "Enter the radius = ";
	cin >> radius;
	cout << "Enter the height = ";
	cin >> height;
	cout << "Enter the cost = ";
	cin >> cost;
	cout << "Enter the amount of cylinder = ";
	cin >> cylinder;


	//process
	base = pi * (radius * radius);
	outside = 2 * pi * radius * height;
	total = base + outside;
	total_cost = total * cost * cylinder;

	//output
	cout << "The total cost for producing " << cylinder << " containers with " << radius << " cm radius and " << height << " cm height is " << setprecision(2) << fixed << total_cost;

	return 0;



}