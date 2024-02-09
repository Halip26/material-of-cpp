#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Word guess game
    string words[] = {"bright", "champs", "coding", "python", "student"};
    int numWords = sizeof(words) / sizeof(words[0]);

    // Here we use srand() function to shuffle the words
    srand(time(0));
    string word = words[rand() % numWords];

    // Variable for player's name input
    string name;
    cout << "Please enter the player's name: ";
    cin >> name;

    // Here we define a variable with string to store guessed letters
    string guessedLetters;

    // Number of chances
    int chance = 10;

    cout << "Okay! " << name << " Let's start guessing." << endl;

    // Looping
    while (chance > 0)
    {
        // Here we will take the guessed letter to check
        char guess;
        cout << "Guess a letter of the word: ";
        cin >> guess;

        // Store guessed letters
        guessedLetters += guess;

        // Here we check if all letters are correct or wrong
        bool wrong = false;

        // Here all letters will be checked one by one using a loop
        for (char letter : word)
        {
            // If the letter entered by the user is in it, then print it
            if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end())
            {
                cout << letter;
            }
            else
            {
                cout << "_";
                wrong = true;
            }
        }
        cout << endl;

        // If wrong is false, it means all letters match
        if (!wrong)
        {
            cout << "Congratulations! " << name << " You guessed all the letters correctly." << endl;
            cout << "The correct word is: " << word << endl;
            break;
        }

        // If the guessed letter is not in the word
        if (word.find(guess) == string::npos)
        {
            // Decrement chances
            chance--;

            cout << "Wrong guess. This letter is not in the word." << endl;

            // Here it will tell how many chances the user has left
            cout << "You have " << chance << " more guess chances." << endl;

            // If chances are 0, we will print that the user lost
            if (chance == 0)
            {
                cout << "Sorry! Your number of chances are over. You lost." << endl;
            }
        }
    }
    return 0;
}
