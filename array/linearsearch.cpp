#include <iostream>
using namespace std;

    int linearsearch(int arr[],int n,int target) {
        for (int i=0;i<n;i++)
        { if(arr[i]==target){ 
            return i;
        }

        } return -1;

    }
    int main() {
        int n;
        cout<<"enter the size of array : ";
        cin>>n;
        int arr[n];
        cout<<"enter the elements of array"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int target ;
        cout<<"enter the element which you want to search ";
        cin>>target;
        cout<<"found at index no  "<<linearsearch(arr,n,target)<<endl;

    }