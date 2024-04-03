#include <iostream>

using namespace std;

int reverseFactorial(int n)
{
  // if user input numbers equal 0
  if (n <= 0)
  {
    return -1;
  }

  int divisor = 2;

  while (n % divisor == 0)
  {
    n /= divisor;
    divisor++;
  }

  return (n == 1) ? divisor - 1 : 0;
}

int main()
{
  int userInput;
  while (true)
  {

    // user input the number
    cout << "\nEnter the number (0 to exit): " << endl;
    cin >> userInput;

    // count reverse factorial number
    int result = reverseFactorial(userInput);

    if (userInput == 0)
    {
      cout << "You have exited the program" << endl;
      break;
    }
    else
    {
      cout << "Reverse Factorial from " << userInput << " is " << result << endl;
    }

    // create lines using looping for
    for (int i = 0; i <= 40; i++)
    {
      cout << "-";
    }
    cout << endl;
  }

  return 0;
}