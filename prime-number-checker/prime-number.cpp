#include <iostream>
#include <cmath>

using namespace std;

// ini fungsi global
bool isPrime(int number)
{
  if (number < 2)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(number); i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }

  return true;
}

// ini fungsi utama
int main()
{
  while (true)
  {
    int number;
    cout << "Enter for prime number test (enter 0 to exit): ";
    cin >> number;

    if (number == 0)
    {
      break;
    }

    if (isPrime(number))
    {
      cout << number << " is a prime number." << endl;
    }
    else
    {
      cout << number << " is not a prime number" << endl;
    }
  }

  return 0;
}
