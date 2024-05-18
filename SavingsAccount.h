#ifndef INHERITANCE_SAVINGSACCOUNT_H
#define INHERITANCE_SAVINGSACCOUNT_H
#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double interest_rate;
public:
    SavingsAccount(double interest_rate, double balance);
    double get_interest_rate() const;
    void set_interest_rate(double interest_rate);
    void print() const;
    void print_same_line() const;

};
#endif //INHERITANCE_SAVINGSACCOUNT_H
