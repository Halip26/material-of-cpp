// Array Reversal and Summation
#include <iostream>

using namespace std;

int main()
{
  int a[50], i, n, sum = 0;

  cout << "Enter The Size of Array(Upto 50): ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "Enter Element Number " << i << ": ";
    cin >> a[i];
  }

  cout << "Elements of Array in Reversed Order is Given Below\n";
  for (i = (n - 1); i >= 0; i--)
  {
    cout << a[i] << "  ";
    sum = sum + a[i];
  }
  cout << "\n\nSum Of Array Is = " << sum;
  return 0;
}