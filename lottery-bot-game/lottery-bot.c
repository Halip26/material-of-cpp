#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
  srand((unsigned int)time(NULL));

  while (1)
  {
    // generate lottery number
    int lottery = rand() % 100;

    // input for user to put the number
    Sleep(500);
    printf("Enter your lottery number (1-99): ");
    int guess;
    scanf("%d", &guess);

    // take the digits from the lottery number
    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;

    // take the digits from the guess
    int guessDigit1 = guess / 10;
    int guessDigit2 = guess % 10;

    // exit the program if guess is 0
    if (guess == 0)
    {
      printf("You exited the lottery game, bye!\n");
      break;
    }

    Sleep(500);
    printf("The lottery number is %d\n", lottery);

    // Conditional for the game's logic
    if (guess == lottery)
    {
      Sleep(500);
      printf("Exact match: You win Rp1.000.000,00\n");
    }
    else if ((guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2) ||
             (guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1))
    {
      Sleep(500);
      printf("Match all digits: You win Rp300.000,00\n");
    }
    else if (guessDigit1 == lotteryDigit1 ||
             guessDigit1 == lotteryDigit2 ||
             guessDigit2 == lotteryDigit1 ||
             guessDigit2 == lotteryDigit2)
    {
      Sleep(500);
      printf("Match one digit: You win Rp100.000,00\n");
    }
    else
    {
      Sleep(500);
      printf("Sorry, no match!\n");
    }
  }

  return 0;
}
