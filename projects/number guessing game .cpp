#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess, number, attempts = 0;

    // random seed
    srand(time(0));
    number = rand() % 100 + 1;   // 1 to 100

    cout << "🎯 Guess the number between 1 to 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too High ❌\n";
        } 
        else if (guess < number) {
            cout << "Too Low ❌\n";
        } 
        else {
            cout << "🎉 Correct! You guessed it in "
                 << attempts << " attempts.\n";
        }

    } while (guess != number);

    return 0;
}
