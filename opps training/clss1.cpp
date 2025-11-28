
//INHERITANCE-----------

#include <iostream>
using namespace std;

// Base class (Parent)
class Animal {
public:
    void eat() {
        cout << "which animal barks?" << endl;
    }
};

// Derived class (Child)
class Dog:  virtual public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
class cat: virtual public Animal ,  virtual public Dog{
public:
    void milk() {
        cout << "The cat drinks milk" << endl;
    }
};

int main() {
    cat d;
    d.eat();   // Inherited from Animal
    d.bark();  // Defined in Dog
    d.milk();

    return 0;
}


