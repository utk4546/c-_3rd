#include<iostream>
using namespace std;
class oneplus{
    int camera;
    int spkr;
    int mic;
 public:
 int setcamera(int x){
    camera=x;
    cout<<"mgpxl"<< " "<<x << endl;
 }
 int setspkr(int y){
    spkr=y;
    cout<<"speaker"<< " "<<y<<" "<<endl;
 } 
 int setmic(int z){
    mic=9;
    cout<<"mic"<<" "<<z<<" "<<endl;
 }
};
 int main (){
 oneplus n1;
 n1.setcamera(34);
 n1.setspkr(56);
 n1.setmic(54);
 oneplus n2;
 n2.setcamera(23);
 n2.setspkr(21);
 n2.setmic(19);
 return 0;
 }
