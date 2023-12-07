#include <stdio.h>

int main()
{
  float weight, height, bmi;

  printf("Enter your weight in kilograms: ");
  scanf("%f", &weight);

  printf("Enter your height in meters: ");
  scanf("%f", &height);

  bmi = weight / (height * height / 10000);

  if (bmi < 18.5)
  {
    printf("Your BMI is %.2f, which means you are underweight.\n", bmi);
  }
  else if (bmi >= 18.5 && bmi < 25)
  {
    printf("Your BMI is %.2f, which means you are normal weight.\n", bmi);
  }
  else if (bmi >= 25 && bmi < 30)
  {
    printf("Your BMI is %.2f, which means you are overweight.\n", bmi);
  }
  else
  {
    printf("Your BMI is %.2f, which means you are obese.\n", bmi);
  }

  return 0;
}