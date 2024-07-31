#include <iostream>

class MyClass {
private:
    static int count;  

public:
    MyClass() {
        ++count;  
    }

    ~MyClass() {
        --count;  
    }

    static void showcount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};


int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass::showcount();  

    MyClass obj2;
    MyClass::showcount();  

    {
        MyClass obj3;
        MyClass::showcount();  
    }  

    MyClass::showcount();  

    return 0;
}

