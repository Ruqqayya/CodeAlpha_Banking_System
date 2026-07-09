#include <iostream>
using namespace std;

class Bank {
    float balance;

public:
    Bank() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    Bank account;
    int choice;
    float amount;

    do {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Amount: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.displayBalance();
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}