#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // For sqrt(), pow(), cos(), and M_PI

using namespace std;

int main1111111111111() {
    double b = 0;
    double c = 0;
    double d = 0;
    double a = 0;

    // Prompt the user to enter the lengths b and c
    cout << "Enter the lengths b and c: ";
    cin >> b >> c;

    // Prompt the user to enter the angle in degrees
    cout << "Enter the angle in degrees: ";
    cin >> d;

    // Convert the angle from degrees to radians
    double radian = d * ( 3.142/ 180.0);

    // Calculate the length of side a using the Law of Cosines
    a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c * cos(radian)));

    // Output the length of side a, formatted to 2 decimal places
    cout << fixed << setprecision(2); // Set precision for floating-point output
    cout << "The length of side a is " << a << endl;

    return 0;
}
