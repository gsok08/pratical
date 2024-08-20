//(a)output will stick together
//chatgpt ans

#include <iostream>
#include <iomanip>  
using namespace std;

int main24() {
    int n = 0;

    cout << "Enter number: ";
    cin >> n;  

    if (n <= 0) {
        cout << "Number must be positive!" << endl;
        return 1;
    }
    for (int i = n * n; i >= 1; --i) {
        cout << setw(5) << i;  
        if ((n * n - i + 1) % n == 0) {
            cout << "\n";
        }
    }

    return 0;
}
