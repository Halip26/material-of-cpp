#include <iostream>
using namespace std;

int main()
{
  int a = 7;
  float b = 12.5;

  cout << "The result: " << !(a == 0) << endl;
  cout << "The result: " << !(a == 7) << endl;
  cout << "The result: " << !(b >= 12.8) << endl;
  cout << "The result: " << !(b == 12.5) << endl;

  // kombinasikan dengan other operator
  cout << "The result: " << !((a == 0) || (a < b)) << endl;
  cout << "The result: " << ((a == 7) && !(a > b)) << endl;

  return 0;
}