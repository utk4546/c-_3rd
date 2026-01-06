// 4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem
// 4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem
#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n ;
    cout<<"size of array = ";
    cin>>n;
    cout<<"elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;

        if (x == 0 || x == 1 || x == 2) {
            arr[i] = x;
        } else {
            cout << "Invalid input! Enter only 0, 1 or 2\n";
            i--; // same index pe dobara input
        }
    }
    

    sort012(arr, n);
    cout<<"sorted array"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

