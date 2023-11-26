#include <stdio.h>

int main() {
  while (1) {
    int number;
    printf("Enter the number, for prime number test: ");
    scanf("%d", &number);

    if (number >= 2) {
      for (int i = 2; i <= number / 2; i += 2) {
        if (number % i == 0) {
          printf("%d is divisible by %d\n", number, i);
          printf("Hence, it is not a prime number\n");
          break;
        }
      }
      if (i > number / 2) {
        printf("%d is divisible just by 1 & itself\n", number);
        printf("Hence, it is a prime number\n");
      }
    } else {
      printf("%d is not a valid input for prime number test\n", number);
    }
  }

  return 0;
}