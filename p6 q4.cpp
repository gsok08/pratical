#include <iostream>
using namespace std;

int main() {
    char cr = ' ';

    cout << "Enter characters to check if they are vowels. Enter 'q' to quit.\n";

    while (true) {
        cout << "Enter the character: ";
        cin >> cr;

        if (cr == 'q') {
            break;  // Exit the loop if the user enters 'q'
        }

        if (cr == 'a' || cr == 'e' || cr == 'i' || cr == 'o' || cr == 'u' ||
            cr == 'A' || cr == 'E' || cr == 'I' || cr == 'O' || cr == 'U') {
            cout << cr << " is a vowel." << endl;
        }
        else {
            cout << cr << " is not a vowel." << endl;
        }
    }

    return 0;
}
