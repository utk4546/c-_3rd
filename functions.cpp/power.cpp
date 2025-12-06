#include<iostream>
using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i = 0; i < b; i++){
//         ans = ans * a; // Correct multiplication
//     }
//     return ans;
// }

int main (){
    int a, b;
    cout << "enter the values: ";
    cin >> a >> b;

    int result = pow(a, b);
    cout << "Power = " << result;

    return 0;
}
