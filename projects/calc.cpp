#include <iostream>
using namespace std;

int main() {
    int a,b ,result,choice ;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    cout<<"enter choice\n 1 for add\n 2 for sub\n 3 for mul\n 4 for div\n "<<endl;
    cin>>choice;
    switch(choice)
    { 
        case 1: cout<<"result= "<<(a+b)<<endl;
        break;
        case 2: cout<<"result ="<<(a-b)<<endl;
        break;
        case 3:  cout<<"result ="<<(a*b)<<endl;
        break;
        case 4: 
        if(b!=0){ 
            cout<<"result="<<(a/b)<<endl;
        }else {cout<<"division is not possible"<<endl;}
        break;
        default:
        cout<<"invalid choice"<<endl;
    }
    

    // Write C code here

    return 0;
}