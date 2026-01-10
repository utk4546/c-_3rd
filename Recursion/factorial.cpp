#include<iostream>
using namespace std;
int fact(int n){
    if(n<0){
        cout<<"factorial is not valid for negative number ";
        return 1 ;
    }
    if(n==0||n==1){
    return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the value ";
    cin>>n;
    int op=fact(n);
    cout<<"factorial is ="<<op;

}