#include <iostream>
#include <string>

int main() {
    // Declare and initialize the array
    std::string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Get the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);

    // Iterate through each element of the array
    for(int i = 0; i < length; i++) {
        // Check if the element starts with the letter 'B'
        if(arr[i][0] == 'B') {
            // Output the element onto the console
            std::cout << arr[i] << std::endl;
        }
    }

    return 0;
}