#include <iostream>

using namespace std;

int main()
{
  int x = 27;
  int *p;
  p = &x;

  cout << "Value of x is : ";
  cout << x << endl;
  cout << "Value of p is : ";
  cout << p << endl;
  cout << "Value of *p is : ";
  cout << *p << endl;

  return 0;
}