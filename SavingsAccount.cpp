#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double interest_rate, double balance) : BankAccount(balance) {
    this->interest_rate = interest_rate;
}

double SavingsAccount::get_interest_rate() const {
    return this->interest_rate;
}

void SavingsAccount::set_interest_rate(double interest_rate) {
    this->interest_rate = interest_rate;
}

void SavingsAccount::print() const {
    BankAccount::print();
    cout << "Interest rate: " << this->interest_rate << endl;
}

void SavingsAccount::print_same_line() const {
    cout << "Balance: $" << setprecision(7) <<  get_balance() << " Interest rate: " << get_interest_rate() << endl;
}
