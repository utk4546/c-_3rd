#include <iostream>
using namespace std;

int main() {
    int n = 4; // size of half diamond (top half)

    // Upper half
    for (int i = 0; i < n; i++) {
        // print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // print first star
        cout << "*";
        // print spaces between stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        // print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // print first star
        cout << "*";
        // print spaces between stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
