#include <iostream>
using namespace std;

class PrimeChecker {
public:
    bool isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    PrimeChecker checker;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (checker.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

