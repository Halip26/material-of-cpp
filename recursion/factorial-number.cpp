#include <iostream>
#include <string>

using namespace std;

// function to rekursif
int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    // this is recursion arya call itself inside its body
    return n * factorial(n - 1);
  }
}

int main()
{
  int userInput;

  while (true)
  {
    // for user to input the number
    cout << "\nEnter your number: " << endl;
    cin >> userInput;

    // just create lines
    cout << string(25, '-') << endl;

    // connected to factorial function
    int cek_factorial = factorial(userInput);

    // to cek using if statement
    if (userInput <= 1)
    {
      cout << "Invalid input! \nYou have exited the program" << endl;
      break;
    }
    else
    {
      cout << "Faktorial from " << userInput << " is " << cek_factorial << endl;
    }
  }

  return 0;
}