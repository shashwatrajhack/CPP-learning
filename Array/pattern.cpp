#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rows

    for (int i = 0; i < 2*n - 1; i++) {

       
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
