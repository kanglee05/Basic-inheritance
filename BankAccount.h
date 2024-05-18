#ifndef INHERITANCE_BANKACCOUNT_H
#define INHERITANCE_BANKACCOUNT_H
using namespace std;
#include <iostream>
#include <iomanip>

class BankAccount {
private:
    double balance;
public:
    BankAccount(double balance);
    double get_balance() const;
    void set_balance(double balance);
    void print() const;
};
#endif //INHERITANCE_BANKACCOUNT_H
