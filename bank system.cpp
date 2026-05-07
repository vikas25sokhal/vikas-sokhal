#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;
    int accountNo;
    float balance;

public:
    void createAccount() {
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter account number: ";
        cin >> accountNo;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    void showAccount() {
        cout << "\n===== Account Details =====\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    b.createAccount();

    do {
        cout << "\n===== Bank System =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.showAccount();
                break;

            case 4:
                cout << "Thank you.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}