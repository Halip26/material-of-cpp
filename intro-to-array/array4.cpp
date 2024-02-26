// Array Reversal and Summation
#include <iostream>

using namespace std;

int main()
{
  string verb[50];
  int i, n;

  cout << "Enter The Size of Array (Upto 50): ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "Enter the verb: " << i << ": ";
    cin >> verb[i];
  }

  cout << "\n";

  cout << "Elements of Array in Reversed Order is Given Below:\n";

  for (i = (n - 1); i >= 0; i--)
  {
    cout << i << ". " << verb[i] << endl;
  }

  cout << "\n\nLength of array = " << verb[i].length();

  return 0;
}