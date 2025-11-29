// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     // int count=0;
//     cout<<"enter the value of n = ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            char ch='A'+i-1;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// ----------------------------------------------------------------------------------------------------------

// IN ORDER A B C 

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     // int count=0;
//     cout<<"enter the value of n = ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            char ch='A'+j-1;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// ----------------------------------------------------------------------------


// CONTIGIUS

#include<iostream>
using namespace std;
int main (){
    int n;
     char count='A';
    cout<<"enter the value of n = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        //    char ch='A'+j-1;
            cout<<count<<"  ";
            count++;
            
        }
        cout<<endl;
    }
}