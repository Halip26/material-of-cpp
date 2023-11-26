#include <stdio.h>

int main() {
  // initialize variables
  char name[256];
  float age;
  int study;

  // prompt the user for input
  printf("Type your first name: ");
  scanf("%s", name);
  printf("Enter your age: ");
  scanf("%f", &age);
  printf("In which class are you in school?: ");
  scanf("%d", &study);

  // print the entered data
  printf("\n\n Hi, My name is %s, I am %f years old.\n", name, age);
  printf("And I study in %dth standard in school.", study);

  return 0;
}