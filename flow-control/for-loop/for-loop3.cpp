#include <iostream>

using namespace std;

int main()
{
  // lesson pattern print
  cout << "Enter the number for rows: ";
  int row;
  cin >> row;

  for (int r = 1; r <= row; r++)
  {
    for (int c = 1; c <= r; c++)
    {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}
