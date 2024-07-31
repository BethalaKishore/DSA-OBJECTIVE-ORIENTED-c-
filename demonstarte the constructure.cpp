#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
        std::cout << "Parameterized constructor called." << std::endl;
    }

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
        std::cout << "Copy constructor called." << std::endl;
    }

    // Method to calculate area
    int area() const {
        return width * height;
    }

    // Method to display dimensions
    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;            // Default constructor
    rect1.display();

    Rectangle rect2(10, 20);    // Parameterized constructor
    rect2.display();
    std::cout << "Area: " << rect2.area() << std::endl;

    Rectangle rect3(rect2);     // Copy constructor
    rect3.display();
    std::cout << "Area: " << rect3.area() << std::endl;

    return 0;
}

