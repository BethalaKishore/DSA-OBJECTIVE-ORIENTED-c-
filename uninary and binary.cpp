#include <iostream>


class NumberUnary {
private:
    int value;
public:
    NumberUnary(int v = 0) : value(v) {}

   
    NumberUnary operator-() const {
        return NumberUnary(-value);
    }

    void display() const {
        std::cout << "Unary - Value: " << value << std::endl;
    }
};


class NumberBinary {
private:
    int value;
public:
    NumberBinary(int v = 0) : value(v) {}

   
    NumberBinary operator+(const NumberBinary &other) const {
        return NumberBinary(value + other.value);
    }

    void display() const {
        std::cout << "Binary - Value: " << value << std::endl;
    }
};

int main() {
    
    NumberUnary num1(10);
    NumberUnary num2 = -num1;  
    num2.display();            

    
    NumberBinary num3(10);
    NumberBinary num4(20);
    NumberBinary sum = num3 + num4;  
    sum.display();                   

    return 0;
}

