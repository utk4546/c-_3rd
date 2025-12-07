#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int place = 1;       // 1, 10, 100, 1000 ...
    int arr[20];         // parts store karne ke liye
    int k = 0;

    // Step 1: Har digit ka place value calculate
    while (n > 0) {
        int digit = n % 10;      // last digit
        int value = digit * place;

        if (value != 0) {
            arr[k++] = value;    // store only non-zero parts
        }

        n = n / 10;              // remove last digit
        place = place * 10;      // increase place value
    }

    // Step 2: reversed order me print karna (largest first)
    cout << "Expanded Form: ";
    for (int i = k - 1; i >= 0; i--) {
        cout << arr[i];
        if (i != 0) cout << " + ";
    }

    return 0;
}
