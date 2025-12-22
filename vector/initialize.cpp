#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //declaration and initialization 
    vector<int> a={1,2,3,4,5};
    a.reserve(100);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    a.push_back(6);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    a.emplace_back(7);
    cout<<a.size()<<" "<<a.capacity()<<endl;
    
}