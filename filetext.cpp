#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to count vowels
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        c = std::tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++count;
        }
    }
    return count;
}

// Function to count words
int countWords(const std::string& str) {
    std::stringstream s(str);
    std::string word;
    int count = 0;
    while (s >> word) ++count;
    return count;
}

// Function to reverse a string
std::string reverseString(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(std::string str) {
    bool newWord = true;
    for (char& c : str) {
        if (newWord && std::isalpha(c)) {
            newWord = false;
        } else if (!newWord && std::isalpha(c)) {
            c = std::toupper(c);
            newWord = false;
        } else {
            newWord = true;
        }
    }
    return str;
}

int main() {
    std::ifstream file("textfile.txt");
    if (!file) {
        std::cerr << "Unable to open file.\n";
        return 1;
    }

    std::string fileData((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    std::cout << "Number of vowels: " << countVowels(fileData) << "\n";
    std::cout << "Number of words: " << countWords(fileData) << "\n";
    std::cout << "Reversed text: " << reverseString(fileData) << "\n";
    std::cout << "Text with second letter of each word capitalized: " << capitalizeSecondLetter(fileData) << "\n";

    return 0;
}
