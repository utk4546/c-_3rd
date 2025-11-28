#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) {
        length = l;
    }

    // Declare friend function
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b) {
    cout << "Length of the box: " << b.length << endl;
}

int main() {
    Box box1(10);       // Create object
    displayLength(box1); // Call friend function
    return 0;
}
