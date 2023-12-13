#include <stdio.h>

int main()
{
  int number;
  int i = 1;

  // Get input from the user
  printf("Enter the number to print table: ");
  scanf("%d", &number);

  // Print the multiplication table
  while (i <= 10)
  {
    printf("%d x %d = %d\n", i, number, number * i);
    i++;
  }

  return 0;
}
