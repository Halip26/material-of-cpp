#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
  int number;

  // Get input from the user
  cout << "Enter the number to print table: ";
  cin >> number;

  // Print the multiplication table
  for (int i = 1; i <= 100; ++i)
  {
    Sleep(500);
    cout << i << " x " << number << " = " << (number * i) << endl;
  }

  return 0;
}
