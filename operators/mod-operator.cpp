// Program to illustrate the
// working of modulo operator
#include <iostream>

using namespace std;

int main()
{
  // To store dividend and divisor
  int dividend, divisor;
  // To store reamider and quotient
  int remainder, quotient;

  cout << "Enter a number to divide: ";
  cin >> dividend;

  cout << "\nEnter a divisor: ";
  cin >> divisor;

  remainder = dividend % divisor;
  quotient = dividend / divisor;

  cout << "\nRemainder when " << dividend << " is divided by " << divisor << " is " << remainder << endl;
  cout << "\nQuotient when " << dividend << " is divided by " << divisor << " is " << quotient;

  return 0;
}