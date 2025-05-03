#include <iostream>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist.";
    } else {
        std::cout << "Factorial of " << number << " = " << factorial(number);
    }

    return 0;
}
