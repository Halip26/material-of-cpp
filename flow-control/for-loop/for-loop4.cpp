#include <iostream>

using namespace std;

int main()
{
  // Lesson factorial
  cout << "Enter the number for computing factorial: ";
  int number;
  cin >> number;

  if (number < 0)
  {
    cout << "Factorial is not defined for negative numbers" << endl;
  }
  else
  {
    int product = 1;
    for (int i = 1; i <= number; i++)
    {
      product *= i;
    }

    cout << "Factorial of the number " << number << " is " << product << endl;
  }

  return 0;
}
