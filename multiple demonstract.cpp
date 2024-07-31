#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Default constructor
    Person() : name("Unknown"), age(0), address("Unknown") {
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor 1
    Person(std::string n) : name(n), age(0), address("Unknown") {
        std::cout << "Constructor with name parameter called" << std::endl;
    }

    // Parameterized constructor 2
    Person(std::string n, int a) : name(n), age(a), address("Unknown") {
        std::cout << "Constructor with name and age parameters called" << std::endl;
    }

    // Parameterized constructor 3
    Person(std::string n, int a, std::string addr) : name(n), age(a), address(addr) {
        std::cout << "Constructor with name, age, and address parameters called" << std::endl;
    }

    // Method to display the details of the person
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    }
};

int main() {
    // Creating objects using different constructors
    Person p1;                           // Default constructor
    Person p2("Alice");                  // Constructor with name
    Person p3("Bob", 25);                // Constructor with name and age
    Person p4("Charlie", 30, "New York");// Constructor with name, age, and address

    // Displaying details of each person
    p1.display();
    p2.display();
    p3.display();
    p4.display();

    return 0;
}

