#include <iostream>
using namespace std;
class utkarsh {
    private :
    int age ;
    int height;
    public:
     int addutk(int x,int y){
        age=x;
        height=y;
        return 0;
    }
    int display(){
        cout<<"age of utk is ="<<age<<endl;
        cout<<"height of utk is="<<height<<endl;
        return 0;
}
};
int main() {
    utkarsh a1;
    a1.addutk(20,6);
    a1.display();
    
    // Write C++ code here
    

    return 0;
}