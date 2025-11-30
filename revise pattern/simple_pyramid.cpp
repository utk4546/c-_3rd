#include <iostream>
using namespace std;

int main() {
    // Write + code here
    int n ;
    cout <<"enter the value of n = ";
    cin >>n;
    for(int i=0;i<=n;i++)
    {  
        for(int j=0;j<=n-i;j++){
            // char ch='A'+j;
            cout<<" ";
        }
        for (int k=1;k<=2*i-1;k++){
            cout<<"*";
        } cout<<endl;
    }


    return 0;
}