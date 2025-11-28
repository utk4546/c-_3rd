
#include <iostream>
#include <cmath>
using namespace std;

void check_prime() {
    int n;
    cout << "Enter number: "<<endl;
    cin >> n;

    bool isPrime = true;

    if(n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "Prime number"<<endl;
    else
        cout << "Not a prime number"<<endl;


}
int main(){
    check_prime();
    check_prime();
    check_prime();
    check_prime();
    check_prime();
    cout<<"bs kr ab hi chlega ";
   return 0;
}
