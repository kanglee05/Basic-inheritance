#include "BankAccount.h"

BankAccount::BankAccount(double balance) {
    this->balance = balance;
}

double BankAccount::get_balance() const {
    return this->balance;
}

void BankAccount::set_balance(double balance) {
    this->balance = balance;
}

void BankAccount::print() const{
    cout << "Balance: $" << setprecision(7) <<  this->balance << endl;
}
