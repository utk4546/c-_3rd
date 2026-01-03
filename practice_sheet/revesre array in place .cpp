
    #include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arrray";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        int temp=0;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"reverse array = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    }
