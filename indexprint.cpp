#include<iostream>
using namespace std;
int main ()
{ 
    int arr[5]={5,6,-7,-9,8};
    int smallest=INT8_MAX;
    int largest=INT16_MIN;
    for(int i=0;i<5;i++){ 
        smallest=min(i,smallest);
        largest=max(i,largest);
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    return 0;
}