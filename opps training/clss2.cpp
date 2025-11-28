#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

/*
class parent{
public :
int n;
void print()
 { 
  cout << n << endl;
 }
};

class child: public parent 
{
 public:
 void setnum()
 {
  n=27;
 }
};

int main()
{
 parent p1;
 child c1;
 c1.setnum();
 c1.print();
}

*/

/*
class vehicle{
 public :
 stringbrand ="Ford";
 



};
*/

/*
class anigma
{
 public:
 void name()
 {
  cout << "Tnis is an animal" << endl;
 }
};
class mammo : public anigma
{
 public :
 void show()
 {
  cout << "Tnis is a mammal" << endl;
 }
};
class dogo : public mammo 
{
 public:
 void prop()
 {
  cout << "Tnis is a dog" << endl;
 }
};

int main()
{
 dogo d;
 d.prop();
 d.show();
 d.name();


 return 0;
}

*/

/*
class fare 
{
 public :
 fare()
 {
 cout << "this is opening" << endl;
 
 }

};

class vehicle 
{
 public :
 vehicle()
 {
 cout << "this is motorbike" << endl;
 }

};

class bus : public vehicle , public fare
{
 public :
 bus()
 {
 cout << "this is a heavy bus " << endl; 
 
 }

};

class car : public vehicle
{
 public :
 car()
 {
 cout << "this is a mustang" << endl;
 
 }

};

int main()
{
 bus b;
 
 


 return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------
class Animal
{
 public: 
 void eat()
 {
  cout << "Bird is eating" << endl;
 
 }
};

class Bird  : virtual public Animal 
{
 public :
 void wings()
 {
  cout << "bird is cooked" << endl; 
 }
};

class mammal : virtual public Animal {

 public :
 void navigation()
 {
  cout << "animal is navigating " << endl;
 }
}
;

class bat : public Bird , public mammal 
{
 public :
 void mink()
 {
 cout << "bat is blackish " << endl;
 
 }


};

int main()
{
 bat b;
 b.mink();
 b.navigation();
 b.wings();
 b.eat();
 

 return 0;
}

//---------------------------------------------------------------------------------------------------------------

// inline int add(int a, int b){
//    return a+b;
// }
 
// int main (){ 
//     cout<<"sum = "<<add(3,5)<<endl;
//     return 0;
// }