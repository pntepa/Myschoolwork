#include <iostream>
#include <limits>

int main() {
    int userInput;
    bool isValidInput = false;

    while (!isValidInput) {
        std::cout << "Enter an integer between 5 and 10: ";
        std::cin >> userInput;

        if (std::cin.good() && userInput >= 5 && userInput <= 10) {
            isValidInput = true;
        } else {
            std::cout << "Invalid input. ";
            if (std::cin.fail()) {
                std::cout << "Sorry enter a valid integer please. ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                std::cout << "Please enter an integer between 5 and 10. ";
            }
        }
    }

    std::cout << "Input accepted: " << userInput << std::endl;
    return 0;
}
