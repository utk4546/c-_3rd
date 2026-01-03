#include <iostream>
#include <climits>
using namespace std;
int main(){
    int max=INT_MAX;
    int min=INT_MIN;
    int n;
    cout<<"enter the size of arrray";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];

   for(int i=0;i<n;i++){
if(arr[i]>max){
   max=arr[i];
}else if(arr[i]<min){
    min=arr[i];
}
}
cout<<"the max elemnt is="<<max<<endl
<<"and min element is ="<<min;

}