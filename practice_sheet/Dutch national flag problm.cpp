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
    // int n ;
    int arr[]={0,2,1,0,2,1};
    int n =6;
    // cout<<"enter the size of arrray";
    // cin>>n;
    // cout<<"enter the elements of array (in form of 0,1,2)"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    sort012(arr, n);
    cout<<"sorted array"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
