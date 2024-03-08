#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n > 1)
  {
    return n * factorial(n - 1);
  }
  else
  {
    return 1;
  }
}

int hcf(int n1, int n2)
{
  if (n2 != 0)
    return hcf(n2, n1 % n2);
  else
    return n1;
}

int calculatePower(int base, int powerRaised)
{
  if (powerRaised != 0)
    return (base * calculatePower(base, powerRaised - 1));
  else
    return 1;
}

int main()
{
  int n, result;
  int hcf_n1, hcf_n2;
  int base, powerRaised, result2;
  int choice;
  do
  {
    cout << "\n\nPress 1 to calculate factorial of a positive integers\n";
    cout << "Press 2 to calculate H.C.F of two positive integers\n";
    cout << "Press 3 to calculate power \n";
    cout << "Press 4 to exit \n";
    cout << "Enter your choice:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      cout << "Enter a non-negative number: ";
      cin >> n;

      result = factorial(n);
      cout << "Factorial of " << n << " = " << result << endl;
      break;
    }
    case 2:
    {
      cout << "Enter two positive integers: ";
      cin >> hcf_n1 >> hcf_n2;

      cout << "H.C.F of " << hcf_n1 << " & " << hcf_n2 << " is: " << hcf(hcf_n1, hcf_n2) << endl;
      break;
    }
    case 3:
    {
      cout << "Enter base number: ";
      cin >> base;

      cout << "Enter power number(positive integer): ";
      cin >> powerRaised;

      result2 = calculatePower(base, powerRaised);
      cout << base << "^" << powerRaised << " = " << result2 << endl;
      break;
    }
    case 4:
    {
      cout << "Thanks for using our program, bbye!";
      exit(0);
    }
    default:
      cout << "Wrong Choice\n";
    }
  } while (choice < 4);

  return 0;
}
