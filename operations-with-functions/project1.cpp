#include <iostream>

using namespace std;

// function definition to swap the values.
void swap(int &x, int &y)
{
  int temp;
  temp = x; /* save the value at address x */
  x = y;    /* put y into x */
  y = temp; /* put x into y */

  return;
}

int main()
{
  // local variable declaration:
  int a;
  int b;

  cout << "Enter an integer to store into variable a : ";
  cin >> a;
  cout << "Enter an integer to store into variable b : ";
  cin >> b;

  cout << "Before swap, value of a :" << a << endl;
  cout << "Before swap, value of b :" << b << endl;

  /* calling a function to swap the values using variable reference.*/
  swap(a, b);

  cout << "After swap, value of a :" << a << endl;
  cout << "After swap, value of b :" << b << endl;

  return 0;
}
