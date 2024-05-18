#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"

int main() {
    SavingsAccount a = SavingsAccount(0.05, 20000.78);

    cout << "Balance: $" << setprecision(7) << a.get_balance() << endl;
    a.set_balance(29000.78);

    cout << "Interest Rate: " << a.get_interest_rate() << endl;
    a.set_interest_rate(0.07);

    // Print on different lines
    a.print();
    // Print on same line
    a.print_same_line();

    return 0;
}
