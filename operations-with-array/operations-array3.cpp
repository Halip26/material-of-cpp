// Program to find a number is armstrong number or not.
/* An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.*/

#include <iostream>
using namespace std;
int main()
{
  int a[100], i, n;

  cout << "Enter how many numbers you want to check for armstrong propperty\n";
  cin >> n;

  cout << "Enter the element: ";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (i = 0; i < n; i++)
  {
    int k = 0, rem = 0, sum = 0;

    k = a[i];
    while (k != 0)
    {                              // untill last digit of the number reached
      rem = k % 10;                // getting the digit of the numbers
      sum = sum + rem * rem * rem; // adding sum and cube of the digit
      k = k / 10;                  // getting next number to get next digit
    }

    if (sum == a[i]) // if calculated sum is equal to the number provided
      cout << a[i] << "\t is an ArmStrong number\n\n";
    else
      cout << a[i] << "\t is not an ArmStrong number\n\n";
  }

  return 0;
}