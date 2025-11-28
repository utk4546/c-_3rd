#include<iostream>
#include<string>
using namespace std;

class B;

class A{
    friend class B;
    int a=45;
    public:
    void display()
    {
        cout<<"the value of a is :"<<a<<endl;
    }

};
class B{
    friend class A;
    int b=56;
    public :
    void display(){
        cout<<"value of b is :"<<b<<endl;
    }
    void sum(A &obj){
        cout<<"valuse of sum of a and b is :"<<obj.a+b<<endl;
    }

};

int main(){
    A d1;
    B d2;
    d1.display();
    d2.display();
    d2.sum(d1);

}