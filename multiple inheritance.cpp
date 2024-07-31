#include <iostream>
#include <string>

// Base class for personal details
class PersonalDetails {
protected:
    std::string name;
    int age;

public:
    PersonalDetails(const std::string &n, int a) : name(n), age(a) {}

    void displayPersonalDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Base class for professional details
class ProfessionalDetails {
protected:
    std::string designation;
    double salary;

public:
    ProfessionalDetails(const std::string &d, double s) : designation(d), salary(s) {}

    void displayProfessionalDetails() const {
        std::cout << "Designation: " << designation << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

// Derived class for employee details using multiple inheritance
class Employee : public PersonalDetails, public ProfessionalDetails {
public:
    Employee(const std::string &n, int a, const std::string &d, double s)
        : PersonalDetails(n, a), ProfessionalDetails(d, s) {}

    void displayEmployeeDetails() const {
        displayPersonalDetails();
        displayProfessionalDetails();
    }
};

int main() {
    // Creating an employee object
    Employee emp("John Doe", 30, "Software Engineer", 85000.00);

    // Displaying employee details
    emp.displayEmployeeDetails();

    return 0;
}

