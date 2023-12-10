#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // seed for random function
  srand(time(0));

  // generate number randomly between 1 to 99
  int number = rand() % 99 + 1;

  char name[50];
  printf("Enter your name: ");
  scanf("%s", &name, sizeof(name));
  // fgets(name, sizeof(name), stdin);

  int max_attempts;
  printf("Enter the number of attempts you want: ");
  scanf("%d", &max_attempts);

  int attempts = 0;
  int guess; // bss

  while (attempts < max_attempts)
  {
    printf("Enter a number from 1 to 99: ");
    scanf("%d", &guess);

    if (guess < number)
    {
      printf("Your guess is low\n");
    }
    else if (guess > number)
    {
      printf("Your guess is high\n");
    }
    else
    {
      printf("Congratulations %s! You guessed it!\n", name);
      break;
    }
    attempts++;
    printf("Attempts remaining: %d\n\n", max_attempts - attempts);
  }

  if (attempts == max_attempts)
  {
    printf("Out of attemps, You lost. The number was %d\n", number);
  }

  return 0;
}