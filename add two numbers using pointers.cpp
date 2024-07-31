#include <iostream>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    // Assigning the addresses of num1 and num2 to ptr1 and ptr2 respectively
    ptr1 = &num1;
    ptr2 = &num2;

    // Asking the user to input two numbers
    std::cout << "Enter first number: ";
    std::cin >> *ptr1;
    std::cout << "Enter second number: ";
    std::cin >> *ptr2;

    // Adding the values pointed by ptr1 and ptr2 and storing the result in sum
    sum = *ptr1 + *ptr2;

    // Assigning the address of sum to ptrSum
    ptrSum = &sum;

    // Displaying the result
    std::cout << "Sum: " << *ptrSum << std::endl;

    return 0;
}

