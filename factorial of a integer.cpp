#include <iostream>


unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    unsigned long long result = factorial(number);
    if (number >= 0) {
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }
    
    return 0;
}

