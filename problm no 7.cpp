// #REVERSE INTERGER 
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the interger = ";
    cin>>x;
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if(ans>INT32_MAX/10 || ans < INT32_MIN/10){
            return 0;
        }
        ans = (ans*10)+digit;
        x=x/10;
    }
    cout<<"ho gya ulta = "<<ans;
}