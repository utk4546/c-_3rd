#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter size";
    cin >> n;

    int a[n];
    cout<<"enter element";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                break;   // same element ko dobara count na kare
            }
        }
    }

    cout << "count is "<< count;
    return 0;
}
