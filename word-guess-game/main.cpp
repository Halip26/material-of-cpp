#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // word guess game
    vector<string> words = {"bright", "champs", "coding", "python", "student"};

    // di sini kita menggunakan fungsi srand() untuk mengacak kata
    srand(time(0));
    string word = words[rand() % words.size()];

    // variabel untuk input teks
    string name;
    cout << "Please enter the player's name: ";
    cin >> name;

    // di sini kita mendefinisikan variabel dengan string
    string guessedLetters;

    // sejumlah peluang dapat digunakan di sini
    int chance = 10;

    cout << "Okay! " << name << " Let's start guessing." << endl;

    // looping
    while (chance > 0) {
        // di sini kita akan mengambil kata untuk diperiksa
        char guess;
        cout << "Guess a letter of the word: ";
        cin >> guess;

        // di guessedLetters kita akan menyimpan semua huruf yang telah kita sisipkan.
        guessedLetters += guess;

        // di sini kita memeriksa apakah semua huruf benar atau salah
        bool wrong = false;

        // di sini semua huruf akan diperiksa satu per satu menggunakan loop
        for (char letter : word) {
            // jika huruf yang dimasukkan pengguna ada di dalamnya, lalu cetak.
            if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
                cout << letter;
            } else {
                cout << "_";
                wrong = true;
            }
        }
        cout << endl;

        // jika wrong adalah false, maka artinya semua huruf cocok
        if (!wrong) {
            cout << "Congratulations! " << name << " You guessed all the letters correctly." << endl;
            cout << "The correct word is: " << word << endl;
            break;
        }

        // jika huruf yang kita tebak tidak ada dalam kata
        if (word.find(guess) == string::npos) {
            // peluang akan dikurangi 1
            chance--;

            cout << "Wrong guess. This letter is not in the word." << endl;

            // di sini akan memberitahu berapa peluang pengguna yang tersisa
            cout << "You have " << chance << " more guess chances." << endl;

            // jika peluangnya 0, kita akan mencetak bahwa pengguna kalah
            if (chance == 0) {
                cout << "Sorry! Your number of chances are over. You lost." << endl;
            }
        }
    }
    return 0;
}
