#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  vector<string> words = {"coding", "coffe", "stay up late", "stuck", "bugs", "error", "undefine", "typing"};

  srand(static_cast<unsigned>(time(nullptr)));

  string word = words[rand() % words.size()];
  string name;
  string guessedLetters;

  int chance = 10;

  cout << "Please enter the player's name: ";
  cin >> name;

  cout << "Okay! " << name << " Let's start guessing." << endl;

  // main program
  while (chance > 0) {
    string guess;
    cout << "Guess a letter of the word: ";
    cin >> guess;

    guessedLetters += guess;
    int wrong = 0;

    // mencari kesesuaian setiap word didalam letter
    for (char letter : word) {
      if (guessedLetters.find(letter) != string::npos) {
        cout << letter;
      } else {
        cout << "_";
        wrong = 1;
      }
    }
    
    if (wrong  == 0) {
      cout << "Congratulations! " << name << " You guessed all the letters correct." << endl;
      cout << "The wrod correct is: " << word << endl;
      break;
    }

    if (word.find(guess) == string::npos) {
      chance -= 1;
      cout << " Wrong guess. This letter is not in the word." << endl;
      cout << "You have " << chance << " more guess chances." << endl;

      if (chance == 0) {
        cout << "Sorry mate! Your number of chances are over. You lose mate!" << endl;
      }
    }
  }

  return 0;
}
