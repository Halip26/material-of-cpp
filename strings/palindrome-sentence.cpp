#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string sentence = "";
    std::cout << "Enter a sentence to check for palindrome: ";
    getline(std::cin, sentence);

    // Remove spaces from the string
    sentence.erase(std::remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    std::string reverseSentence = sentence;
    std::reverse(reverseSentence.begin(), reverseSentence.end());

    // If sentence is equal to reverseSentence
    if (sentence == reverseSentence) {
        std::cout << "Yes, inputted sentence is a palindrome!";
    } else {
        std::cout << "No, inputted sentence is not a palindrome!";
    }

    return 0;
}