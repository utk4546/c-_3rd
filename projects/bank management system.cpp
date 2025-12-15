#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    int accNo;
    float balance;

public:
    void createAccount() {
        cout << "\nEnter account holder name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter initial balance: ";
        cin >> balance;

        cout << "\n✅ Account created successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "✅ Amount deposited successfully\n";
        } else {
            cout << "❌ Invalid amount\n";
        }
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "✅ Withdrawal successful\n";
        } else {
            cout << "❌ Insufficient balance or invalid amount\n";
        }
    }

    void checkBalance() {
        cout << "\n💰 Current Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    do {
        cout << "\n====== BANK MANAGEMENT SYSTEM ======\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.createAccount();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                b.checkBalance();
                break;
            case 5:
                cout << "\n🙏 Thank you for using Bank System\n";
                break;
            default:
                cout << "\n❌ Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}
