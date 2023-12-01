// CPP program to demonstrate pre and post decrement operator

#include <iostream>

using namespace std;

// Driver Code
int main() {
  int x = 10, a;
  int y = 18, b;

  cout << "Pre Decrement Operation";
  cout << "\n-----------------------\n";
  a = --x;

  // Value of a will change
  cout << "\na = " << a;

  // Value of x change before execution of a=--x;
  cout << "\nx = " << x;

  cout << "\n\nPost Decrement Operation";
  cout << "\n------------------------\n";
  b = y--;

  // Value of b will not change
  cout << "\nb = " << b;

  // Value of y change after execution of b=y--;
  cout << "\ny = " << y;

  return 0;
}