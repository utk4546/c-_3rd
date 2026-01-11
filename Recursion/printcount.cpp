#include<iostream>
using namespace std;
int print(int n){
    if(n<=1){
        return 1;
    }
    cout<<n<<endl;
    return print(n-1);
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    int s=print(n);
    cout<<s;

}
