#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std; // Mengimpor namespace std

int main() {
    vector<string> words = {"bright", "champs", "coding", "python", "student"};
    srand(static_cast<unsigned>(time(nullptr)));

    string word = words[rand() % words.size()];
    string name;
    string guessedLetters;
    int chance = 10;

    cout << "Please enter the player's name: ";
    cin >> name;

    cout << "Okay! " << name << " Let's start guessing." << endl;

    while (chance > 0) {
        string guess;
        cout << "Guess a letter of the word: ";
        cin >> guess;

        guessedLetters += guess;
        int wrong = 0;

        for (char letter : word) {
            if (guessedLetters.find(letter) != string::npos) {
                cout << letter;
            } else {
                cout << "_";
                wrong = 1;
            }
        }

        if (wrong == 0) {
            cout << "Congratulations! " << name << " You guessed all the letters correct." << endl;
            cout << "The word correct is: " << word << endl;
            break;
        }

        if (word.find(guess) == string::npos) {
            chance -= 1;
            cout << "Wrong guess. This letter is not in the word." << endl;
            cout << "You have " << chance << " more guess chances." << endl;

            if (chance == 0) {
                cout << "Sorry! Your number of chances are over. You lose." << endl;
            }
        }
    }

    return 0;
}
