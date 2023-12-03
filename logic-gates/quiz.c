#include <stdio.h>

int main() {

  int a = 81;
  int b = 37;

  // Quiz 1
  printf("Quiz 1: %d", ((a == 0) ^ !(a > b))); // false

  // Quiz2: Using OR (||)
  printf("Quiz2: %d", (a > 50 || b > 30)); // true

  // Quiz 3: Using AND (&&)
  printf("Quiz 3: %d", (a > 80 && b < 40)); // true

  // Quiz 4: Using XOR (^)
  printf("Quiz 4: %d", (a == 81 ^ b == 37)); // false

  // Quiz 5: Using NOT (!)
  printf("Quiz 5: %d", !(a <= 80)); // true

  // Quiz 6: Combining AND, OR, and NOT
  printf("Quiz 6: %d", ((a > 80 && b < 40) || !(a == 81))); // true

  // Quiz 7: Combining XOR and AND
  printf("Quiz 7: %d", ((a == 81 ^ b == 37) && (a > 50))); // false

  // Quiz 8: Combining OR, AND, and NOT
  printf("Quiz 8: %d", ((a > 80 || b < 40) && !(a == 81))); // false

  // Quiz 9: Using NOT and OR
  printf("Quiz 9: %d", (!(a > 80) || b != 37)); // false

  // Quiz 10: Using XOR and OR
  printf("Quiz 10: %d", ((a == 81 ^ b == 37) || (a < 90))); // true

  // Quiz 11: Using XOR and OR
  printf("Quiz 11: %d", ((a <= 81 ^ b >= 37) || (a > 90))); // false

  return 0;
}
