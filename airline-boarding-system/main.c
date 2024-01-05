#include <stdio.h>

int main()
{
  char name[50];
  float age;

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your age: ");
  scanf("%f", &age);

  printf("\nWelcome %s, to Corona Checking Centre,\nIt is mandatory to get checked for corona symptoms before you board the flight!\n", name);
  printf("Enter the following details with full honesty to generate your report\n");
  printf("Instructions for users: Enter (0) for NO and (1) for YES\n");
  printf("------------------------------------------------------------\n");

  int fever, loss_of_taste, loss_of_smell, cough, tiredness;

  printf("\n1. Have you been feeling feverish since past few days? (0 for No, 1 for Yes): ");
  scanf("%d", &fever);

  printf("\n2. Have you been feeling loss of taste since past few days? (0 for No, 1 for Yes): ");
  scanf("%d", &loss_of_taste);

  printf("\n3. Have you been feeling loss of smell since past few days? (0 for No, 1 for Yes): ");
  scanf("%d", &loss_of_smell);

  printf("\n4. Are you having cough problem since past few days? (0 for No, 1 for Yes): ");
  scanf("%d", &cough);

  printf("\n5. Have you been tired since past few days? (0 for No, 1 for Yes): ");
  scanf("%d", &tiredness);

  int isPositive = fever && (loss_of_taste || loss_of_smell) && cough && tiredness;

  if (isPositive)
  {
    printf("\n%s, you seem to be corona positive based on your symptoms.\n", name);
    printf("We cannot board you on the flight. Sorry for the inconvenience!\n");
  }
  else
  {
    printf("\nAre you diagnosed with COVID-19? (0 for No, 1 for Yes): %s\n", isPositive ? "Yes" : "No");

    int tickets, luggage, canBoard;

    printf("Answer with No (0) or Yes (1)\nDo you have valid tickets? (0 for No, 1 for Yes): ");
    scanf("%d", &tickets);

    printf("Do you want your luggage checked in? (0 for No, 1 for Yes): ");
    scanf("%d", &luggage);

    canBoard = luggage || !isPositive;

    if (!canBoard)
    {
      printf("\nBoarding process incomplete!\n");
    }
    else
    {
      printf("\nBoarding process completed successfully. Have a safe trip! %s\n", name);
    }
  }

  return 0;
}
