#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int number = rand() % 99 + 1;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    int max_attempts = 5;
    int attempts = 0;
    
    while (attempts < max_attempts) {
        int guess;
        std::cout << "Enter a number from 1 to 99: ";
        std::cin >> guess;
        
        if (guess < number) {
            std::cout << "Guess is low" << std::endl;
        } else if (guess > number) {
            std::cout << "Guess is high" << std::endl;
        } else {
            std::cout << "Congratulations " << name << "! You guessed it!" << std::endl;
            break;
        }
        
        attempts++;
        std::cout << "Attempts remaining: " << max_attempts - attempts << std::endl << std::endl;
    }
    
    if (attempts == max_attempts) {
        std::cout << "Out of attempts, You Lost. The number was " << number << std::endl;
    }
    
    return 0;
}
