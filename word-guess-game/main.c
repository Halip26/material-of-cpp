#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  // this is word guess game in C
  char *words[] = {"bright", "champs", "coding", "programming", "artificial"};

  // disini kita akan random arraynya
  int wordCount = sizeof(words) /sizeof(words[0]);
  int randomIndex = rand() % wordCount;
  char *word = words[randomIndex];

  // for input text  
  char name[100];
  printf("Please enter the player's name: ");
  scanf("%s", name);

  // inisialisasi var with empty string 
  char guessedLetters[26] = "";

  // chance that users have
  int chance = 10;

  printf("Okay! %s Let's start guessing.\n", name);

  // looping while for checking
  while (chance > 0) {
    char guess;
    printf("Guess a letter of the word: ");
    scanf(" %c", &guess);

    // convert var guess to lowercase
    char lowercaseGuess = tolower(guess);

    // will be save all the letters to var guessletters
    strncat(guessedLetters, &lowercaseGuess, 1);

    // var for user to count how many wrong
    int wrong = 0;

    // all the letters will check one by one
    for (int i = 0; i < strlen(word); i++) {
      // if user input letters correctly
      char lowercaseWord = tolower(word[i]);
      if (strchr(guessedLetters, lowercaseWord) != NULL) {
        // print the orginal case of the letter 
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

    if (wrong == 0) {
      printf("\nCongratulations! %s, You guessed all the letters correct.\n", name);

      printf("The word correct is: %s\n", word);
      break;
    }

    // if user letter that users guessed not in word 
    if (strchr(word, lowercaseGuess) == NULL) {
      chance -= 1;

      printf("Wrong guess, This letter is not in word.\n");

      // will tell the user the remaining their chance 
      printf("You have %d more guess chances.\n", chance);

      // if the chance equal 0, will print that user is loss!
      if (chance == 0) {
        printf("Sorry %s, Your number of chances are over, You lose!\n");
      }
    }
  }

  return 0;
}