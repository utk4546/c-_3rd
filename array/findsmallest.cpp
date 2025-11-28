#include<iostream>
using namespace std;
int main ()
{   
    int num[]={5,50,22,1,-15,-24};
    int size=6;
     int smallest= INT8_MAX;
    for(int i=0;i<size;i++){ 
        cout<<num[i]<<endl;
        if(num[i]<smallest){ 
            smallest=num[i];
        }
    }
     cout<<"in the above array ";

    cout<<"smallest num ="<<smallest<<endl;
    return 0;
}