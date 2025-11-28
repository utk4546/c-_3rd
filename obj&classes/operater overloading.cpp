
// binary operater


// #include <iostream>
// using namespace std;

// class box{
// int a,b;
// public:
// void accept(int x,int y){
//     a=x;
//     b=y;
// }
// box operator +(box z){
//     box z1;
//     z1.a=z.a+a;
//     z1.b=z.b+b;
//     return z1;
// }
// void display(){
//     cout<<a<<endl<<b;
// }
// };
// int main(){ 
//     box a1,a2,a3;
//     a1.accept(5,6);
//     a2.accept(6,8);
//     a3=a1+a2;
//     a3.display();
//     return 0;
// }



//unary operater 

#include <iostream>
using namespace std;

class box{
int a,b;
public:
void accept(int x,int y){
    a=x;
    b=y;
}
box operator - (){
    box z1;
    z1.a=-a;
    z1.b=-b;
    return z1;
}
void display(){
    cout<<endl<<a<<" "<<endl<<b;
}
};
int main(){ 
    box a1,a2;
    a1.accept(5,6);
    a2=-a1;
    a1.display();
    a2.display();
    return 0;
}