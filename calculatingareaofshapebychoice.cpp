#include <iostream>
#include <cmath>

double calculateSquareArea() {
    double side;
    std::cout << "Enter the length of the side: ";
    std::cin >> side;
    return pow(side, 2);
}

double calculateRectangleArea() {
    double length, width;
    std::cout << "Enter the length and width: ";
    std::cin >> length >> width;
    return length * width;
}

double calculateTriangleArea() {
    double base, height;
    std::cout << "Enter the base and height: ";
    std::cin >> base >> height;
    return 0.5 * base * height;
}

int main() {
    int choice;

    while (true) {
        std::cout << "Select a shape to calculate the area:\n";
        std::cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "The area of the square is " << calculateSquareArea() << "\n";
        } else if (choice == 2) {
            std::cout << "The area of the rectangle is " << calculateRectangleArea() << "\n";
        } else if (choice == 3) {
            std::cout << "The area of the triangle is " << calculateTriangleArea() << "\n";
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid input. Please enter a valid choice.\n";
        }
    }

    return 0;
}
