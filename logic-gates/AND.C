#include <stdio.h>

int main() {
  int a = 15;
  int b = 19;

  printf("%d\n", (a == 0) && (a > b)); // Output: 0
  printf("%d\n", (a == 0) && (a < b)); // Output: 0
  printf("%d\n", (a == 15) && (a > b)); // Output: 0
  printf("%d\n", (a == 15) && (a < b)); // Output: 0
  printf("%d\n", (a == 0) || (a > b)); // Output: 1
  printf("%d\n", (a == 0) || (a < b)); // Output: 1
  printf("%d\n", (a == 15) || (a > b)); // Output: 1
  printf("%d\n", (a == 15) || (a < b)); // Output: 1

  return 0;
}