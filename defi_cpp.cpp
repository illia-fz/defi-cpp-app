#include <iostream>

int main() {
    double deposit = 75.0;
    double interestRate = 0.07;
    double interest = deposit * interestRate;
    std::cout << "Deposited " << deposit << " tokens, earned " << interest << " in interest" << std::endl;
    return 0;
}
