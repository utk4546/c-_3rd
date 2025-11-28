#include <iostream>
using namespace std;
class student
{
  public:
  int x,y;
  student()//if paraneter is not given this called default constructer 
  { 
    x=10;
    y=20;
  }
};
int main ()
{
    student a1,a2;
    cout<<a1.x<<endl;
    cout<<a2.x;
}