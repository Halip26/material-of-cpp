#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Word guess game in C
    char *words[] = {"bright", "champs", "coding", "python", "student"};

    // Di sini kita menggunakan fungsi choice()
    int wordCount = sizeof(words) / sizeof(words[0]);
    int randomIndex = rand() % wordCount;
    char *word = words[randomIndex];

    // variabel untuk input text
    char name[100];
    printf("Please enter the player's name: ");
    scanf("%s", name);

    // disini mendefinisikan variabel di sini dengan string.
    char guessedLetters[26] = "";

    // sejumlah peluang dapat digunakan di sini
    int chance = 10;

    printf("Okay! %s Let's start guessing.\n", name);

    // Looping
    while (chance > 0) {
        // disini akan mulai mengambil kata untuk diperiksa
        char guess;
        printf("Guess a letter of the word: ");
        scanf(" %c", &guess);

        // Convert the guess to lowercase
        char lowercaseGuess = tolower(guess);

        // di guessedLetters kita akan menyimpan semua huruf yang telah kita sisipkan.
        strncat(guessedLetters, &lowercaseGuess, 1);

        // disini memeriksa apakah semua pengguna salah atau benar.
        int wrong = 0;

        // disini semua huruf akan diperiksa satu per satu menggunakan loop
        for (int i = 0; i < strlen(word); i++) {
            // disini jika huruf yang dimasukkan pengguna ada di dalamnya, lalu cetak.
            char lowercaseWord = tolower(word[i]);
            if (strchr(guessedLetters, lowercaseWord) != NULL) {
                // Print the original case of the letter
                if (isupper(word[i])) {
                    printf("%c", toupper(word[i]));
                } else {
                    printf("%c", word[i]);
                }
            } else {
                printf("_");
                wrong = 1;
            }
        }

        // disini jika wrong adalah nol maka artinya semua kata cocok.
        if (wrong == 0) {
            printf("\nCongratulations! %s You guessed all the letters correct.\n", name);
            printf("The word correct is: %s\n", word);
            break;
        }

        // disini jika huruf yang kita tebak tidak ada dalam kata
        if (strchr(word, lowercaseGuess) == NULL) {
            // tidak ada peluang yang akan dikurangi 1
            chance -= 1;  

            printf("Wrong guess. This letter is not in word.\n");

            // disini akan memberitahukan berapa peluang pengguna yang terisa.
            printf("You have %d more guess chances.\n", chance);

            // Jika peluangnya nol, kami akan mencetak si pengguna kalah
            if (chance == 0) {
                printf("Sorry! Your number of chances are over. You lose.\n");
            }
        }
    }

    return 0;
}