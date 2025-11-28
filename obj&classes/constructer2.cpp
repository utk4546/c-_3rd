#include <iostream>
using namespace std;
class student
{
  public:
  int x,y;
  student( int a,int b)//paramiterized constrcter
  { 
    x=a;
    y=b;
     cout<<"paramiterized constructer"<<endl;
  }
  student()
  {
    cout<<"default constructer"<<endl;
  }
 student(int p)
  {
    x=p;
    cout<<"parametrized";
  }

};
int main ()
{ 
    student a1(5,7),a2,a3(4);

    
}