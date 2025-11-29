#include<iostream>
using namespace std;
int main (){
    int n;
    int space;
    cout<<"enter the value of n = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        space=n-1;
        cout<<" ";
        space--;
        for(int k=1;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;

    }
}
